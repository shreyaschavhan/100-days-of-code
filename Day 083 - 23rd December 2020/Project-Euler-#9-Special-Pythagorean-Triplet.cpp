
// Final solution -
// Logic :
/*
Given :
a + b + c = n .............[i]
a < b < c that implies
a < b .....................[ii]
a < c .....................[iii]
a^2 + b^2 = c^2 ...........[iv]
Adding [ii] + [iii]:
2a < b + c
3a < n .................from [i]
Ans............................................
a < n/3
squaring on both side of eqn [i]
a^2 + b^2 + c^2 + 2ab + 2bc + 2ac = n^2
finding value of b using these equations
b = ((n*n) - (2*a*n))/(2*(n-a))
c = n - a - b

..............................................
Final Equations:
a < n/3
b = ((n*n) - (2*a*n))/(2*(n-a))
c = n - a - b
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int maxProduct = -1;
        for(int a = 1; a <= n/3; a++){
            int b = ((n*n) - (2*a*n))/(2*(n-a));
            int c = n - a - b;
            if((a*a + b*b) == c*c)
                maxProduct = max(maxProduct, a*b*c);
        }
        cout << maxProduct << endl;
    }
    return 0;
}


// Trial 1 : 5 out of 8 test case passed
// Failed Test Cases - #5, #6, #7 - time limit exceeded
/*
#include <bits/stdc++.h>
using namespace std;


void Triplet(int n){
    int maxProduct = -1;
    vector<int> squares;
    for(int i = 1; i <= n; i++){
        squares.push_back(i*i);
    }

    for(int i = n - 1; i >= 2; i--){
        int first = 0;
        int last = i - 1;
        while(first < last){
            if((squares[first] + squares[last] == squares[i]) && ((first + 1) + (last + 1) + (i + 1)) == n){
                // cout << first + 1 << endl << last + 1 << endl << i + 1 << endl;
                int cube = ((first + 1) * (last + 1) * (i + 1));
                // cout << cube << endl;
                maxProduct = max(maxProduct, cube);
            }
            if((squares[first] + squares[last]) < squares[i]){
                first++;
            }
            else{
                last--;
            }
        }
    }
    cout << maxProduct << endl;
}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        Triplet(n);
    }
    return 0;
}
*/
// Trial 2 - 6 out of 8 test cases passed
// Failed Test Cases - #5 #6 - time limit exceeded
/*
#include <bits/stdc++.h>
using namespace std;


void Triplet(int n){
    int maxProduct = -1;
    vector<int> squares;
    for(int i = 1; i <= n/2; i++){
        squares.push_back(i*i);
    }

    for(int i = n/2 - 1; i >= 2; i--){
        int first = 0;
        int last = i - 1;
        while(first < last){
            if((squares[first] + squares[last] == squares[i]) && ((first + 1) + (last + 1) + (i + 1)) == n){
                // cout << first + 1 << endl << last + 1 << endl << i + 1 << endl;
                int cube = ((first + 1) * (last + 1) * (i + 1));
                // cout << cube << endl;
                maxProduct = max(maxProduct, cube);
            }
            if((squares[first] + squares[last]) < squares[i]){
                first++;
            }
            else{
                last--;
            }
        }
    }
    cout << maxProduct << endl;
}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        Triplet(n);
    }
    return 0;
}

*/
