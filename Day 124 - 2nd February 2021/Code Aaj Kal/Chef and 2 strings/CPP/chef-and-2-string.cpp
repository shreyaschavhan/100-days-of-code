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
        string chefs_word;
        string computers_word;
        cin >> chefs_word >> computers_word;
        unsigned int i = 0;
        bool flag = 0;
        while(i < chefs_word.length()){
            for(unsigned int j = 0; j < computers_word.length(); j++){
                if(chefs_word[i] == computers_word[j]){
                    i++;
                }
                if(chefs_word.length() == i){
                    flag = 1;
                }
            }
            break;
        }
        if(flag == 1){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
    return 0;
}
