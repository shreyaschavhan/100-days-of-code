#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    vector <long> sq;
    for(int i = 0; i <= 100000; i++){
        sq.push_back(i*i);
    }
    for(int i = 0; i < q; i++){
        int a, b;
        cin >> a >> b;
        int count = 0;
        for(int i = sqrt(a); i <= sqrt(b) + 1; i++){
            if(sq[i] >= a && sq[i] <= b){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
