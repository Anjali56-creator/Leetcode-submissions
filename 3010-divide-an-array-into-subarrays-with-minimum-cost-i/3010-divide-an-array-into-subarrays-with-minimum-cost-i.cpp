class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int sum=nums[0];
        int a=nums.size();
        int min1=INT_MAX, min2=INT_MAX;
        for(int i=1;i<a;i++){
            if (nums[i]<min1) {
                min2=min1;
                min1=nums[i];
            } 
            else if (nums[i]<min2) {
                min2=nums[i];
            }
        }
        return sum+min1+min2;
   
    }
};