#include <bits/stdc++.h>
using namespace std;

// void primeSieve(){
//
// }

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        // primeSieve();
        vector<int> result;
        vector <int> prime(100000, 0);
        for(int i = 2; i < 10001; i++){
            if(prime[i] == 0){
                for(int j = i*i; j <= 10001; j += i){
                    prime[j] = 1;
                }
            }
        }
        for(long i = 10001; i < 40001; i++){
            if(prime[i] == 0){
                for(long j = i*i; j <= 40001; j += i){
                    prime[j] = 1;
                }
            }
        }

        // for(long i = 40001; i < 50001; i++){
        //     if(prime[i] == 0){
        //         for(long j = i*i; j <= 50001; j += i){
        //             prime[j] = 1;
        //         }
        //     }
        // }


        for(int i = 2; i <= 100001; i++){
            if(prime[i] == 0){
                result.push_back(i);
            }
        }
        cout << result[n-1] << endl;

    }
    return 0;
}
