class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<int>count(501);
        int n=nums.size();
        //int pairs=n/2;
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
        for(int i=0;i<500;i++){
            if(count[i]%2!=0)
            return false;
        }
        return true;
    }
};