class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        for(auto it:mp){
            if(it.second==1)
            return it.first;
        }
        return 0;
    }
};