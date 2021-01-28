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
        vector <int> DIFFICULTY;
        int cakewalk = 0;
        int simple = 0;
        int easy = 0;
        int easy_medium = 0;
        int medium = 0;
        int medium_hard = 0;
        int hard = 0;
        while(N--){
            string S;
            cin >> S;
            if(!S.compare("cakewalk")){
                cakewalk++;
            }
            if(!S.compare("easy")){
                easy++;
            }
            if(!S.compare("simple")){
                simple++;
            }
            if(!S.compare("easy-medium")){
                easy_medium++;
            }
            if(!S.compare("medium")){
                medium++;
            }
            if(!S.compare("medium-hard")){
                medium_hard++;
            }
            if(!S.compare("hard")){
                hard++;
            }
        }
        if((cakewalk >= 1 && simple >= 1 && easy >= 1) && (easy_medium >= 1 || medium >= 1) && (medium_hard >= 1 || hard >= 1)){
            cout << "Yes" << '\n';
        }
        else{
            cout << "No" << '\n';
        }
    }
    return 0;
}
