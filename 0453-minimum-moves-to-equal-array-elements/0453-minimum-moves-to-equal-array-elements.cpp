class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mini=nums[0];
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i]-mini;
        }
        return sum;
    }
};