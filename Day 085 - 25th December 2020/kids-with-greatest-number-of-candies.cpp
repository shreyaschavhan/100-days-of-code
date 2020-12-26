class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxElement = *max_element(candies.begin(), candies.end());
        vector <bool> result;
        for(int i : candies){
            if(i+extraCandies >= maxElement){
                result.push_back(1);
            }
            else{
                result.push_back(0);
            }
        }
        return result;
    }
};
