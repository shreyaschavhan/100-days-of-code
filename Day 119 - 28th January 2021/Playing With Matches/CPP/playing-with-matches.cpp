// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    int matches[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    while (T--){
        int A, B;
        cin >> A >> B;
        int No_of_Matches = 0;
        string Sum = to_string(A + B);
        for(unsigned int i = 0; i < Sum.length(); i++){
            No_of_Matches += matches[Sum[i] - '0'];
        }
        cout << No_of_Matches << '\n';
    }
    return 0;
}
