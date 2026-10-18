class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--){
              int idx=0;
             int mini=INT_MAX;
            for(int i=0;i<nums.size();i++){
                if(nums[i]<mini){
                mini=nums[i];
                idx=i;
                }
            
            }
            nums[idx]=mini*multiplier;
           
        }
        return nums;
    }
};