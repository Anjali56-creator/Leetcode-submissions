class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int low=0,high=nums.size()-1,a=-1,b=-1;
         if(nums.empty()) return {-1,-1};
        //left occurrence
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<target)
            low=mid+1;
            else if(nums[mid]==target) {
                high=mid-1;
                a=mid;
            }
            else high=mid-1;
        }
         ans.push_back(a);

 // right 
         int start=0,end=nums.size()-1;
         while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]<target)
            start=mid+1;
            else if(nums[mid]==target) {
                start=mid+1;
                b=mid;
            }
            else end=mid-1;
        }
         ans.push_back(b);
        return ans; 
    }
};