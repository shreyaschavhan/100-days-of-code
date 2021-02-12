// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    if(N%4){
        N--;
    }
    else{
        N++;
    }
    cout << N <<'\n';
    return 0;
}
