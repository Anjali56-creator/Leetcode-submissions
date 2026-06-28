class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefixSum=0,total=0;
       unordered_map<int,int>m;
       m[0]=1;
       for(int i=0;i<nums.size();i++){
           prefixSum+=nums[i];
           if(m.count(prefixSum-k)){
           total+=m[prefixSum-k];
           m[prefixSum]++;

           }
           else
           m[prefixSum]++;
       }
       return total;
    }
};