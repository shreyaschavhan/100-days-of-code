// Author - Shreyas Chavhan
// Profile - https://github.com/shreyaschavhan
// Link - https://www.codechef.com/LRNDSA01/problems/CARVANS

// HINT -
/*
We can form following possible cases -
CASE I - descending order - EX - 8 7 6 5 4
CASE II - ascending order - EX - 4 5 6 7 8
CASE III - inc & then dec  - EX - 4 5 3 2 1
CASE IV - dec & then inc - EX - 8 7 1 2 3
CASE V - inc & inc - EX - 4 5 1 2 3
CASE VI - dec & dec - EX - 3 2 7 6 5
Boundary Case -
CASE I - Count == 1
CASE II - Count == 0
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        // Boundary Conditions
        if(N == 1){
            int Num;
            cin >> Num;
            cout << 1 << '\n';
            continue;
        }
        int arr[N];
        int count = 1;
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        // Boundary Conditions
        if(arr[0] <= 0){
            cout << 0 << '\n';
            continue;
        }
        int minSpeed = arr[0];
        for(int i = 0; i < N - 1; i++){
            if(arr[i+1] <= arr[i] && minSpeed > arr[i+1]){
                count++;
                minSpeed = min(minSpeed, arr[i+1]);
            }
        }
        cout << count << '\n';
    }
    return 0;
}


/*

// Fourth attempt failed
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        // Boundary Conditions
        if(N == 1){
            int Num;
            cin >> Num;
            cout << 1 << '\n';
            continue;
        }
        int arr[N];
        int count = 1;
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        if(arr[0] <= 0){
            cout << 0 << '\n';
            continue;
        }
        int minSpeed = arr[0];
        for(int i = 0; i < N - 1; i++){
            if(arr[0] == 1){
                break;
            }
            else if(arr[0] <= arr[1]){
                count++;
                break;
            }
            else if(arr[i+1] <= arr[i] && minSpeed > arr[i+1]){
                count++;
                minSpeed = min(minSpeed, arr[i+1]);
            }
            else{
                break;
            }
        }
        cout << count << '\n';
    }
    return 0;
}

*/
/*
First three failed attemps!
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        if(N == 1){
            int Num;
            cin >> Num;
            cout << 1 << '\n';
            continue;
        }
        int count = 1;
        int arr[N];
        // int minSpeed = INT_MAX;
        for(int i = 0; i < N; i++){
            cin >> arr[i];
            // if((i - 1) > 0){
            //     if(arr[i-1] > arr[i]){
            //         count++;
            //     }
            // }
            // minSpeed = min(minSpeed, arr[i]);
        }
        // int i = 0;
        // while(arr[i] > minSpeed){
        //     count++;
        //     i++;
        // }

        for(int i = 1; i < N; i++){
            if(arr[0] == 1){
                break;
            }
            else if(arr[0] < arr[1]){
                count++;
                break;
            }
            else if(arr[i-1] > arr[i]){
                count++;
            }
            else{
                // count++;
                break;
            }
        }
        cout << count << '\n';
    }
    return 0;
}
*/
