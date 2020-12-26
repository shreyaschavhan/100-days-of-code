#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector <long> triangular_number;
    long sum = 0;
    for(int i = 1; i < 100000; i++){
        sum += i;
        triangular_number.push_back(sum);
    }
    for(int a = 0; a < t; a++){
        int n;
        cin >> n;
        for(long i : triangular_number){
            long count = 0;
            for(long j = 1; j <= i; j++){
                if(i % j == 0){
                    count++;
                }
            }
            if(count > n){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
