// Project Euler #2: Even Fibonacci numbers

/* My Logic - As an attempt [Wrong]

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

long fibo(long n){
    vector <long int> fib;
    fib[0] = 1;
    fib[1] = 2;
    int i = 2;
    while(i < n){
        fib[i] = fib[i-1] + fib[i-2];
        i++;
    }
    int sum = 0;
    for(auto j = 0; j < fib.size(); j++){
        if(fib[j] < n && fib[j] % 2 == 0){
            sum += fib[j];
        }
    }
    return sum;

}



int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        fibo(n);
        cout << endl;
    }
    return 0;
}
*/

// After understanding the logic-

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        long fib0 = 0;
        long fib1 = 1;
        long sum = 0;
        while(fib0 + fib1 < n){
            if((fib0 + fib1) % 2 == 0){
                sum+= fib0 + fib1;
            }
            long temp = fib1;
            fib1 = fib0 + fib1;
            fib0 = temp;
        }
        cout << sum << endl;
    }

    return 0;
}
