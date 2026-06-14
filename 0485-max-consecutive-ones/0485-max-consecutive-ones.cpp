class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0,mx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
            c++;
            mx=max(mx,c);
            }
            else{
                c=0;
            }
        }
        return mx;
    }
};