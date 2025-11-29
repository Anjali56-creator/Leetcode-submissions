class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%k==0)
        return 0;
        else if(sum>k)
        return sum%k;
        else
        return sum%k;
        
    }
};