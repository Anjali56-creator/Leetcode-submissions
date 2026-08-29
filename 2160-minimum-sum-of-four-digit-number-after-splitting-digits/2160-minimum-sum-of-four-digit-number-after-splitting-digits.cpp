class Solution {
public:
    int minimumSum(int num) {
        vector<int>nums;
        while(num){
            int a=num%10;
            nums.push_back(a);
            num/=10;
        }
        sort(nums.begin(),nums.end());
        int a=nums[0]*10+nums[nums.size()-1];
        int b=nums[1]*10+nums[nums.size()-2];
        int ans=a+b;
        return ans;
    }
};