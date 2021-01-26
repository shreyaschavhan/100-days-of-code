
/****************************
P1 - Player 1 Input Score
P2 - Player 2 Input Score
S1 - Player 1 Score
S2 - Player 2 Score
LEAD1 - Player 1's Lead
LEAD2 - Player 2's Lead
****************************/ 

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    int S1 = 0;
    int S2 = 0;
    int LEAD1 = 0;
    int LEAD2 = 0;
    int W;
    int LEAD = INT_MIN;
    while(N--){
        int P1, P2;
        cin >> P1 >> P2;
        S1 += P1;
        S2 += P2;
        if(S1 > S2){
            LEAD1 += abs(S1 - S2);
        }
        else{
            LEAD2 += abs(S1 - S2);
        }
        LEAD = max(LEAD, abs(S1 - S2));
    }
    if(LEAD1 > LEAD2){
        W = 1;
    }
    else{
        W = 2;
    }
    cout << W << " " << LEAD << '\n';
    return 0;
}
