class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int i=0,j=0,ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i<j && nums[i]<nums[j])
                ans=max(ans,nums[j]-nums[i]);
            }
        }
        if(ans==0)
        return -1;
        return ans;

    }
};