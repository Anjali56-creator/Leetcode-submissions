class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n=nums.size();
        int c=0;
        sort(nums.begin(),nums.end());
        int j=0;
        for(int i=0;i<n;i++){
            while((long long)nums[i]>k*(long long)nums[j]){
            j++;
            }
            c=max(c, i - j + 1);
        }
      
        return n-c;
    }
};