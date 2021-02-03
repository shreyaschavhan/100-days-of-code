// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int squares[1000];
    for(int i = 1; i < 1000; i++){
        squares[i] = i * i;
    }

    int T;
    cin >> T;

    while(T--){
        int l, b;
        cin >> l >> b;
        int i = 1;
        int min_square = l * b;
        while(squares[i] <= (l * b)){
            if((l * b) % squares[i] == 0)
                min_square = min(min_square, (l * b) / squares[i]);
            i++;
        }

        cout << min_square << '\n';
    }
    return 0;
}
