class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0,sumD=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(nums[i]){
                int a=nums[i]%10;
                sumD+=a;
                nums[i]/=10;
            }
        }
        return (sum-sumD);
        
    }
};