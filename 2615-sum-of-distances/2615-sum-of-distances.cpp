class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n=nums.size();
        vector<long long>ans(n,0);
        unordered_map<int,long long>indexsum;
        unordered_map<int,long long>indexcount;
        for(int i=0;i<n;i++){
            long long freq=indexcount[nums[i]];
            long long sum=indexsum[nums[i]];
            ans[i]+=freq*i-sum;
            indexcount[nums[i]]+=1;
            indexsum[nums[i]]+=i;
        }
        indexsum.clear();indexcount.clear();
        for(int i=n-1;i>=0;i--){
            long long freq=indexcount[nums[i]];
            long long sum=indexsum[nums[i]];
            ans[i]+=sum-freq*i;
            indexcount[nums[i]]+=1;
            indexsum[nums[i]]+=i;
        }
        return ans;
      
    }
};