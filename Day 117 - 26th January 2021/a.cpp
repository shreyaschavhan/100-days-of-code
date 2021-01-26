// vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
//     vector <int> result;
//     ranked.push_back(player[0]);
//     int i = 0;
//     while(i < player.size()){
//         sort(ranked.begin(), ranked.end(), greater<int>());
//         for(unsigned int j = 0; j < ranked.size(); j++){
//             if(player[i] == ranked[j]){
//                 if(ranked[j+1] != player[i])
//                 {
//                     result.push_back(j);
//                     ranked[j] = player[i+1];
//                 }
//                 else
//                 {
//                     result.push_back(j+1);
//                     ranked[j+1] = player[i+1];
//                 }
//             }
//         }
//         i++;
//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    std::vector<int> v;
    v.push_back(3);
    v.push_back(10);
    v.push_back(2);
    v.push_back(11);
    cout << find(v.begin(), v.end(), 2) - v.begin() << '\n';
    return 0;
}
