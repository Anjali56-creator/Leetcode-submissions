class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int maxcandy=candies[0];
        for(int i=0;i<candies.size();i++){
            if (candies[i] > maxcandy)
             maxcandy = candies[i];

        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=maxcandy)
            ans.push_back(true);
            else
            ans.push_back(false);
        }
        return ans;
    }
};