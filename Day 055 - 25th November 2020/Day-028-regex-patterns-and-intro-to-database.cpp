// Concept - https://www.geeksforgeeks.org/regex-regular-expression-in-c/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector <string> fName;
    regex gmail(".+@gmail\\.com$");
    for(int i = 0; i < N; i++){
        string firstName;
        string mailId;
        cin >> firstName >> mailId;
        if(regex_match(mailId, gmail)){
            fName.push_back(firstName);
        }
    }
    sort(fName.begin(), fName.end());
    for(auto j: fName){
        cout << j << endl;
    }
}
