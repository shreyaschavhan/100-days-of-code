// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int R;
    cin >> R;
    if(R <= 50){
        cout << 100 << '\n';
    }
    else if(R > 50 && R <= 100){
        cout << 50 << '\n';
    }
    else{
        cout << 0 << '\n';
    }
    return 0;
}
