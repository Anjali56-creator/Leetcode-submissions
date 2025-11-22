class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%3==0)
            c==0;
            else
            c++;
        }
        return c;
    }
};