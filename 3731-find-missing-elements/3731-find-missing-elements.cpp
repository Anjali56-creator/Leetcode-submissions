class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
           for(int j=nums[i]+1;j<nums[i+1];j++){
            ans.push_back(j);
           }
            
        }
        return ans;
    }
};