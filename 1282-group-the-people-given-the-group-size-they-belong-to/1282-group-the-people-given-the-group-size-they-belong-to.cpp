class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>>mp;
        vector<vector<int>>ans;
        for(int i=0;i<groupSizes.size();i++){
            int size=groupSizes[i];
            mp[size].push_back(i);
            if(mp[size].size()==size){
                ans.push_back(mp[size]);
                mp[size].clear();
            }
        }
        return ans;
    }
};