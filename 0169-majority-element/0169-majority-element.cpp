class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0;
        sort(nums.begin(),nums.end());
        if(nums.size()==1)
        return nums[0];
        for(int i=0;i<nums.size()-1;i++){
           return nums[nums.size()/2];
        }
       return 0; 
    }
};