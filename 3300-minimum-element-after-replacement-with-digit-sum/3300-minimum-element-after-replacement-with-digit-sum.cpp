class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int>ans;
        int a=0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            while(nums[i]){
                a=nums[i]%10;
                nums[i]=nums[i]/10;
                sum+=a;
            }
            ans.push_back(sum);
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};