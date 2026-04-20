class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size(),ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i<j && nums[i]<nums[j])
                ans=max(ans,nums[j]-nums[i]);
            }
        }
        if(ans==0)
        return -1;
        return ans;

    }
};