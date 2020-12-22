#include <bits/stdc++.h>
using namespace std;

int main(){
    string num = "3675356291";
    int k = 5;
    vector <string> v;
    for(unsigned int i = 0; i < num.length(); i++){
        string num_dash = "";
        if(k+i < num.length()){
            for(unsigned int j = i; j < k + i; j++){
                num_dash += num[j];
            }
            v.push_back(num_dash);
        }
    }
    // for(string i: v){
    //     cout << i << endl;
    // }
    int max_mul = INT_MIN;
    for(string i : v){
        int multi = 1;
        for(unsigned int j = 0; j < i.size(); j++){
            int mul = i[j] - '0';
            multi *= mul;
        }
        max_mul = max(max_mul, multi);
    }
    cout << max_mul << endl;
    return 0;
}
