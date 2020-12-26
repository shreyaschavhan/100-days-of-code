#include <bits/stdc++.h>
using namespace std;

int main(){
    int MaxDivisors = 1000;
    vector <int> smallest_triangular_number;
    smallest_triangular_number.push_back(0); // 0 ==> no divisor
    // for index=1 we have triangle=1
    // for index=2 we have triangle=3
    // for index=3 we have triangle=6
    // ...
    // for index=7 we have triangle=28
    // ...
    int index = 0;
    int triangular_number = 0; // same as (index)(index + 1)/2
    while(smallest_triangular_number.size() < MaxDivisors){
        // next triangular_number
        index++;
        triangular_number += index;
        // performance tweak (5x faster):
        // the "best" numbers with more than 300 divisors end with a zero
        // that's something I cannot prove right now, I just "saw" that debugging
        if (smallest_triangular_number.size() > 300 && triangular_number % 10 != 0)
        continue;

        // find all divisors i where i*j=triangle
        // it's much faster to assume i < j, which means i*i < triangular_number
        // whenever we find i then there is a j, too
        int divisors = 0;
        int i = 1;
        while (i*i < triangular_number){
            // divisible ? yes, we found i and j, that's two divisors
            if (triangular_number % i == 0)
            divisors += 2;
            i++;
        }
        // if i=j then i^2=triangle and we have another divisor
        if (i*i == triangular_number)
        divisors++;
        // fill gaps:
        // e.g. 10 is the smallest number with 4 divisors
        //      28 is the smallest number with 6 divisors
        // there is no number between 10 and 28 with 5 divisors
        // therefore 28 is the smallest number with AT LEAST 5 divisors, too
        while (smallest_triangular_number.size() <= divisors)
            smallest_triangular_number.push_back(triangular_number);
    }

    int t;
    cin >> t;
    for(int a = 0; a < t; a++){
        int n;
        cin >> n;
        cout << smallest_triangular_number[n + 1] << endl;
    }
    return 0;
}
