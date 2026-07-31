class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int>pivotLesser;
        vector<int>pivotGreater;
        vector<int>equal;
        vector<int>ans;
        int start=0;

        while(start<n){
            if(nums[start]<pivot){
            pivotLesser.push_back(nums[start]);
            start++;
            }
            else if(nums[start]>pivot){
                pivotGreater.push_back(nums[start]);
                start++;
            }
            else{
                equal.push_back(nums[start]);
                start++;
            }
        }
         for (int x : pivotLesser)
         ans.push_back(x);

         for (int x : equal)
         ans.push_back(x);

         for (int x : pivotGreater)
         ans.push_back(x);
        return ans;
    }
};