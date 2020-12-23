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
