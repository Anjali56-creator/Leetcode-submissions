class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n=nums.size();
        double avg,mini=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++){
           avg=(nums[i]+nums[n-i-1])/2.0;
           mini=min(avg,mini);
        }
        return mini;
    }
};