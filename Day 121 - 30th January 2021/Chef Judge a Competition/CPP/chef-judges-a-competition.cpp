// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int A[N], B[N];
        int maxA = 0, maxB = 0;
        for(int i = 0; i < N; i++){
            cin >> A[i];
            maxA = max(maxA, A[i]);
        }
        for(int i = 0; i < N; i++){
            cin >> B[i];
            maxB = max(maxB, B[i]);
        }
        int SumA = accumulate(A, A+N, -maxA);
        int SumB = accumulate(B, B+N, -maxB);
        if(SumA < SumB){
            cout << "Alice" << '\n';
        }
        else if(SumA > SumB){
            cout << "Bob"<< '\n';
        }
        else{
            cout << "Draw" << '\n';
        }

    }
    return 0;
}
