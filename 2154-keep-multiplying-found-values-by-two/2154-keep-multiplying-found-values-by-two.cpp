class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int i=0;
       while(i <nums.size()){
            if(nums[i]==original){
                original*=2;
                i=-1;
            }
            i++;
        }
        return original;
    }
};