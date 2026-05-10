class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>dp(n,-1);
        dp[0]=0;
        for(int j=1;j<n;j++){
            for(int i=0;i<j;i++){
                if(dp[i]!=-1 && abs(nums[j]-nums[i])<=target){
                    dp[j]=max(dp[j],dp[i]+1);
                }
            }
        }
        return dp[n-1];
    }
};