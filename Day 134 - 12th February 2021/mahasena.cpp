// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    int lucky = 0;
    int unlucky = 0;
    while(N--){
        int A;
        cin >> A;
        if(A%2){
            unlucky++;
        }
        else{
            lucky++;
        }
    }
    if(lucky > unlucky){
        cout << "READY FOR BATTLE" << '\n';
    }
    else{
        cout << "NOT READY" << '\n';
    }
    return 0;
}
