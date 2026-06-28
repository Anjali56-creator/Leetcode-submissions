class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int total=INT_MAX,start=0,end=0,sum=0,n=nums.size();
        while(end<n)
        {
            sum+=nums[end];
            while(sum>=target){
                total=min(total,end-start+1);
                sum-=nums[start++];
            }
            end++;
        }
        return total== INT_MAX ? 0: total;
    }
};