class Solution {
public:
    int missingInteger(vector<int>& nums) {

        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1)
            sum+=nums[i];
            else
            break;
        }
       
        int a=sum;
        while(find(nums.begin(), nums.end(), a) != nums.end())
        a++;
       
        return a;
    }
};