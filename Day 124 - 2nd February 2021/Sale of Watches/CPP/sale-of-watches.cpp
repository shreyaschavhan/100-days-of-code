/******************************************************************************
Didn't worked = Wrong Answer
******************************************************************************

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
        int price[7];
        int rating[7];
        for(int i = 0; i < 7; i++){
            cin >> price[i];
        }
        for(int i = 0; i < 7; i++){
            cin >> rating[i];
        }
        bool buy[7] = {0};
        for(int i = 1; i < 8; i++){
            if(i % 2 == 0){
                if((price[i-1] % 2 == 0) && (rating[i-1] % 2 == 0)){
                    buy[i-1] = 1;
                }
            }
            else{
                if((price[i-1] % 2 != 0) && (rating[i-1] % 2 != 0)){
                    buy[i-1] = 1;
                }
            }
        }
        // cout << "Buy : ";
        // for(int i = 0; i < 7; i++){
        //     cout << buy[i] << " ";
        // }
        int max_watches = 0;
        int index = 0;
        for(int i = 0; i < 7; i++){
            if(buy[i] == 1){
                if(i == 0){
                    // max_watches += 1;
                    index = i;
                }
                if(i > 0){
                    if((price[index] > price[i]) && (rating[index] < rating[i])){
                        max_watches += 1;
                        index = i;
                    }
                }
            }
        }
        if(max_watches != 0){
            cout << max_watches + 1 << '\n';
        }
        else{
            cout << 0 << '\n';
        }

    }
    return 0;
}

*/
