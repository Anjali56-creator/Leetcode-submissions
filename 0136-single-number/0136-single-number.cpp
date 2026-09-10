class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        for(int x : nums)
        if(mp[x]==1)
        return x;

        return 0;
    }
};