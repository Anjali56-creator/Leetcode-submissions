class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        vector<int>com(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }
        int p=0,q=0;
        for(int i=0;i<nums.size();i++){
          if(i%2==0) com[i]=pos[p++];
          else com[i]=neg[q++];
        }
        return com;
    }
};