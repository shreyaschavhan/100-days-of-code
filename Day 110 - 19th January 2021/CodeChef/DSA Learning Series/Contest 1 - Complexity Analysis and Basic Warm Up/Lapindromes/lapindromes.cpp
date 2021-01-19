#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);


    int T;
    cin >> T;
    while(T--){
        string S;
        cin >> S;
        string left, right;
        if(S.length() % 2 == 0){
            left = S.substr(0, (S.length()/2));
            right = S.substr(S.length()/2);
        }
        else{
            left = S.substr(0, ((S.length() - 1)/2));
            right = S.substr(((S.length() - 1)/2) + 1);
        }
        bool flag = 0;
        sort(left.begin(), left.end());
        sort(right.begin(), right.end());
        for(unsigned int i = 0; i < left.length(); i++){
            if(left[i] != right[i]){
                cout << "NO" << '\n';
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout << "YES" << '\n';
        }
    }
    return 0;
}
