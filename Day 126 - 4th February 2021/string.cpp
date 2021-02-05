// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

string erase_pair(string s){
    if(s.length() == 0){
        return "";
    }
    if(s.length() == 1){
        return s;
    }
    string result = "";
    if(s[0] == s[1]){
        result = erase_pair(s.substr(2, s.length()-2));
    }
    else{
        char p = s[0];
        result = erase_pair(s.substr(1, s.length() - 1));

        if(p == result[0]){
            result = result.substr(1, result.length() - 1);
        }
        else{
            result = p + result;
        }
    }
    return result;
}


int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    if(erase_pair(s).empty()){
        cout << "Empty String" << endl;
    }
    else{
        cout << erase_pair(s) << endl;
    }

    return 0;
}
