class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>maxleft(n);
        vector<int>minright(n);
        maxleft[0]=nums[0];
        minright[n-1]=nums[n-1];

        for(int i=1;i<n;i++){
            maxleft[i]=max(nums[i],maxleft[i-1]);
          
        }
           for(int i=n-2;i>=0;i--){
            minright[i]=min(nums[i],minright[i+1]);
          
        }
        vector<int>ans(n);
        ans[n-1]=maxleft[n-1];
        for(int i=n-2;i>=0;i--){
            if(maxleft[i]<=minright[i+1]){
                ans[i]=maxleft[i];
            }
            else{
                ans[i]=ans[i+1];
            }
        }
        return ans;

    }
};