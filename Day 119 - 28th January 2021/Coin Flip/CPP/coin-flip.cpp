// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan
// Hint - Notice the pattern in Sample Input 


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        int G;
        cin >> G;
        while(G--){
            int I, N, Q;
            cin >> I >> N >> Q;
            if(I == Q){
                if(N % 2){
                    cout << N/2 << '\n';
                }
                else{
                    cout << (N+1)/2 << '\n';
                }
            }
            else{
                if(N % 2){
                    cout << (N - N/2)<< '\n';
                }
                else{
                    cout << (N - (N+1)/2) << '\n';
                }
            }
        }
    }
    return 0;
}
