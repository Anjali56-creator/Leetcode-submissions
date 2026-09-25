class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a=nums.size();
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int n=(a*(a+1))/2;
        return n-sum;
    }
};