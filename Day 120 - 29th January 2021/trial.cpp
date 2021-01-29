vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    vector <int> result;
    set <int> s(ranked.begin(), ranked.end());
    vector <int> newRanked;
    newRanked.assign(s.begin(), s.end());
    newRanked.push_back(player[0]);
    int i = 0;
    int size = newRanked.size();
    int index;
    while(i < player.size()){
        sort(newRanked.begin(), newRanked.begin(), greater<int>());
        // int index = find(ranked.begin(), ranked.end()), player[i]) - ranked.begin();
        for(int j = 0; j < size; j++){
            if(newRanked[j] == player[i]){
                index =  j;
                break;
            }
        }
        size = index;
        result.push_back(index+1);
        newRanked[index] = player[i+1];
        i++;
    }
    return result;
}
