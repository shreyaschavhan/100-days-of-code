#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        vector<string> v;
        cin >> n >> k;
        string num;
        cin >> num;
        for(unsigned int i = 0; i < num.length(); i++){
            string num_dash = "";
            if(k+i < num.length()){
                for(unsigned int j = i; j < k + i; j++){
                    num_dash += num[j];
                }
                v.push_back(num_dash);
            }
        }

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
    }
    return 0;
}
