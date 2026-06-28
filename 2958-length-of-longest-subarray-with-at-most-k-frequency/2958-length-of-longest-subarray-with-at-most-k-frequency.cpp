class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        int start=0,end=0,len=0,n=nums.size();
        while(end<n){
            count[nums[end]]++;
            while(count[nums[end]]>k){
                count[nums[start]]--;
                start++;
            }
            len=max(len,end-start+1);
            end++;
        }
        return len;
    }
};