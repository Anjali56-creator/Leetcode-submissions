class Solution {
public:
    int pivotInteger(int n) {
        vector<int>nums;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
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
            if(leftSum==rightSum) return i+1;
            leftSum+=nums[i];
        }
        return -1;
    }
};