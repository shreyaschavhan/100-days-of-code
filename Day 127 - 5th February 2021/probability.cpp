// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);


    int N, T;
    cin >> N >> T;
    int A[N];
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    // cout << "-----------------" << '\n';
    // int d = 1;
    // int count = 0;
    // vector <vector <int>> combinations;
    // while(d < N){
    //     cout << "IR :";
    //     int it = d;
    //     for(int i = 0; i < N; i++){
    //         int num = i;
    //         int j = 0;
    //         while(j < it && num < N){
    //             cout << num << " ";
    //             num++;
    //             j++;
    //         }
    //         cout << '\n';
    //         // int num = i;
    //         // int j = 0;
    //         // while(j < it){
    //         //     combinations[count].push_back(A[num]);
    //         //     cout << combinations[count][num] << '\n';
    //         //     num++;
    //         //     j++;
    //         // }
    //         // count++;
    //     }
    //     d++;
    //     cout << '\n';
    // }
    // for(int i = 0; i < combinations.size(); i++){
    //     for(int j = 0; j < combinations[i].size(); j++){
    //         cout << combinations[i][j] << " ";
    //     }
    //     cout << '\n';
    // }
    int i = 0;
    int j = 0;
    int sum = 0;
    int count = 0;
    while(j < N){
        sum += A[j];
        if (sum <= T){
            count += (j - i + 1);
        }
        else{
            while(sum > T){
                sum -= A[i];
                i++;
            }
            count += (j - i + 1);
        }
        j++;
    }
    cout << count / double(N*(N+1)/2) << '\n';
    return 0;
}
