#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    vector<int> v(num);
    for(int i = 0; i < num; i++){
        cin >> v[i];
    }
    for(int i : v){
        int j = 0;
        int n = i / 5;
        j = ((n+1) * 5) - i;
        if(i >= 38){
            if(j < 3){
                cout << ((n+1) * 5) << endl;
            }
            else{
                cout << i << endl;
            }
        }
        else{
            cout << i << endl;
        }
    }
    return 0;
}
