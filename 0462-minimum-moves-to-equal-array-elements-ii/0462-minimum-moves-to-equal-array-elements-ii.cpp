class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        int median=0;
        sort(nums.begin(),nums.end());
        if(n%2!=0)
        median=nums[n/2];
        else median = (nums[n/2] + nums[n/2 - 1]) / 2;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=abs(nums[i]-median);
        }
        return sum;
    }
};