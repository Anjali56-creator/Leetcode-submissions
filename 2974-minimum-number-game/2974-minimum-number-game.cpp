class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>arr;
        for(int i=0;i<nums.size()-1;i+=2){
            arr.push_back(nums[i+1]);
             arr.push_back(nums[i]);
        }
        return arr;
    }
};