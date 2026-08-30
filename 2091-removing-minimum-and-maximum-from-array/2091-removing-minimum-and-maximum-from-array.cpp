class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int minIndex=0;
        int maxIndex=0;
        for(int i=0;i<n;i++){
           if(nums[i]>nums[maxIndex])
           maxIndex=i;

           if(nums[i]<nums[minIndex])
           minIndex=i;

        }

        int left=max(minIndex,maxIndex)+1;
        int right=n-min(minIndex,maxIndex);
        int both=min(minIndex,maxIndex)+1+n-max(minIndex,maxIndex);
        
        return min({left,right,both});


    }
};