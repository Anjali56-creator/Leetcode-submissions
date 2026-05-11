class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            vector<int>temp;
           while(nums[i]){
            int a =nums[i]%10;
            nums[i]/=10;
            temp.push_back(a);
           }
           reverse(temp.begin(),temp.end());
           for(int a:temp){
            ans.push_back(a);
           }
        }
        return ans;
    }
};