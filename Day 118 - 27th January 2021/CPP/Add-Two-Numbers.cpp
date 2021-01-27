// Author - Shreyas Chavhan
// Profile - https://github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

int add(int A, int B){
    return (A+B);
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int A, B;
        cin >> A >> B;
        cout << add(A, B) << '\n';
    }
    return 0;
}
