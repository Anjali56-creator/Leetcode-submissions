class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefixSum;
        int sum=nums[0];
        prefixSum.push_back(sum);
        for(int i=1;i<n;i++){
            sum+=nums[i];
            prefixSum.push_back(sum);
        }
        int leftSum=0;
        for(int i=0;i<n;i++){
            int rightSum=sum-leftSum-nums[i];
            if(leftSum==rightSum) return i;
            leftSum+=nums[i];
        }
        return -1;
    }
};