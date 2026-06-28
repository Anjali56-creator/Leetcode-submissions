class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>m; // remainder with there count
        int prefixSum=0,rem=0,total=0;
        m[0]=1;
        for(int i=0;i<nums.size();i++){
            prefixSum+=nums[i];
            rem=prefixSum % k;
            if(rem<0)
            rem+=k;

            if(m.count(rem))
            {
                total+=m[rem];
                m[rem]++;
            }
            else
            m[rem]=1;
        }
        return total;
    }
};