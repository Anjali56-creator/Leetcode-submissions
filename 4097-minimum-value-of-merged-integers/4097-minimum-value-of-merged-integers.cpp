class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
      int n=nums.size();
      int ans=INT_MAX;
       for(int i=0;i<n;i+=2){
       int b=nums[i+1];
      int multiplier = 10;
       while (b >= 10) {
        multiplier *= 10;
        b /= 10;
        }
     int num = nums[i] * multiplier + nums[i + 1];
      ans=min(num,ans);
       } 
       return ans;
    }
};