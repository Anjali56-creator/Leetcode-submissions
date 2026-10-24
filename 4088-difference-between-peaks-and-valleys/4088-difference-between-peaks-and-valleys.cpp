class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int n=nums.size();
        int cnt=0,cnt2=0;
        for(int i=1;i<n-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
            cnt+=nums[i];
        }
         for(int i=1;i<n-1;i++){
            if(nums[i]<nums[i-1] && nums[i]<nums[i+1])
            cnt2+=nums[i];
        }
        return cnt-cnt2;
    }
};