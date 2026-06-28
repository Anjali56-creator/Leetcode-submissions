class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
      int start=0,product=1,count=0;
      int n=nums.size(),end=0;
      for (int end = 0; end < nums.size(); end++){
        product*=nums[end];
        while(product>=k && start<=end)
        {
            product/=nums[start];
            start++;
        }
        count+=(end-start+1);
      }
      return count;

    }
};