class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size(),c=1;
        vector<int>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1])
            c++;
            else {
             if(c>(n/3))
                ans.push_back(nums[i]);
                c=1;
            }
        }
        if(c>(n/3))
        ans.push_back(nums[n-1]);
        return ans;
    }
};