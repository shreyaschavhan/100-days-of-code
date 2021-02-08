// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

// Logic -
/*
What i did here is checked if the difference in scores of both team is greater than the remaining attempts both of them will have.
for example if A scored greater than B and A - B is greater than remaining attempts of B then team A will will and vice versa
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        string s;
        cin>> s;
        // vector<bool> A;
        // vector<bool> B;
        int A = 0, B = 0;
        int count = 2*N;
        int remainingA = N;
        int remainingB = N;
        for(int i = 0; i < 2 * N; i++){
            if(A - B > remainingB || B - A > remainingA){
                count = i;
                break;
            }
            if(i % 2 == 0){
                // A.push_back(s[i] - '0');
                if(s[i] - '0'){
                    A++;
                }
                remainingA--;
            }
            else{
                // B.push_back(s[i] - '0');
                if(s[i] - '0'){
                    B++;
                }
                remainingB--;
            }

        }
        // if(count % 2 != 0)
            // cout << count + 1<< '\n';
        // else
            cout << count << '\n';

    }

    return 0;
}
