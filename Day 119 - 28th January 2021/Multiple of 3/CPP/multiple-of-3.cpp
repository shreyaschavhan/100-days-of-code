// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan
// Hint - https://www.youtube.com/watch?v=1p6Xod8Bgl0&list=PLi0ZM-RCX5nsjTRrJVndL0jdJkIhKvGOJ&t=3272s

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        long long K, d0, d1;
        cin >> K >> d0 >> d1;
        long long nextDigit = (d0 + d1) % 10;
        long long count = d0 + d1 + nextDigit;
        // Boundary Case
        if(K == 2){
            if(((d0*10) + d1) % 3 == 0){
                cout << "YES" << '\n';
            }
            else{
                cout << "NO" << '\n';
            }
            continue;
        }
        // next test cases
        long long remDigit = K - 3;
        while(remDigit > 0){
            if(nextDigit == 6){
                long long sets = remDigit/4;
                count += (sets * 20);
                remDigit -= (sets * 4);
                if(remDigit == 0){

                }
                else if(remDigit == 1){
                    count += 2;
                }
                else if(remDigit  == 2){
                    count += 6;         // 2 + 4 bcz 24 at the end
                }
                else if(remDigit  == 3){
                    count += 14;        // 2 + 4 + 8 bcz 248 at the end
                }
                remDigit = 0;
                break;
            }
            else if(nextDigit == 0){
                remDigit = 0;
                break;
            }
            else{
                nextDigit = (nextDigit * 2) % 10;
                count += nextDigit;
                remDigit--;
            }
        }
        if(count % 3 == 0){
            cout << "YES" << '\n';
        }
        else{
            cout <<"NO" << '\n';
        }
    }
    return 0;
}


/******************************************************************************
Brute Force approach - Works for K < 10^9
******************************************************************************
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        long long K, d0, d1;
        cin >> K >> d0 >> d1;
        long long count = d0 + d1;
        for(long long i = 2; i < K; i++){
            count += (count % 10);
        }
        if(count % 3 == 0){
            cout << "YES" << '\n';
        }
        else{
            cout <<"NO" << '\n';
        }
    }
    return 0;
}
******************************************************************************/
