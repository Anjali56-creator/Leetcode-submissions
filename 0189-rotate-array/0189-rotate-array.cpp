class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      int n=nums.size();
      k=k%n;
       std:: rotate(nums.begin(),nums.end()-k,nums.end());
    }
};