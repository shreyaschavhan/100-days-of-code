vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    vector <int> result;
    ranked.push_back(player[0]);
    int i = 0;
    while(i < player.size()){
        sort(ranked.begin(), ranked.end(), greater<int>());
        // for(unsigned int j = 0; j < ranked.size(); j++){
        //     if(player[i] == ranked[j]){
        //         if(ranked[j+1] != player[i])
        //         {
        //             result.push_back(j);
        //             ranked[j] = player[i+1];
        //         }
        //         else
        //         {
        //             result.push_back(j+1);
        //             ranked[j+1] = player[i+1];
        //         }
        //     }
        // }
        int index = find(ranked.begin(), ranked.end(), player[i]) - ranked.begin();
        if(ranked[index+1] != player[i]){
            result.push_back(index+1);
            ranked[index] = player[i+1];
        }
        else{
            result.push_back(index+2);
            ranked[index+1] = player[i+1];
        }
        i++;
    }
    result.pop_back();
    return result;
}
