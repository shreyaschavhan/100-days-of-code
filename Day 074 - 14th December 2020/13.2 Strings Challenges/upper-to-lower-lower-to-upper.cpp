/*
Given a string s with both uppercase and lowercase latin characters(a - z). Your task is to convert whole string into
1. lower case
2. upper case
Base idea 'a' - 'A' = 32
*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "sdfjahkdsjfhakjdhf";
    // to uppercase
    for(int i = 0; i < s.size(); i++){
        if(s[i] > 'a' && s[i] < 'z'){
            s[i] -= 32;
        }
    }
    cout << s << endl;
    // to lowercase
    for(int i = 0; i < s.size(); i++){
        if(s[i] > 'A' && s[i] < 'Z'){
            s[i] += 32;
        }
    }
    cout << s << endl;
    return 0;
}
