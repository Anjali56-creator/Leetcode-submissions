class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>count(51,0);
        
        for(int i=0;i<=n-k;i++){
            vector<int>seen(51,0);
            for(int j=i;j<k+i;j++)
            if(!seen[nums[j]]){
            count[nums[j]]++;
            seen[nums[j]]=true;
            }
        }
       
        int ans=-1;
        for(int i=0;i<=50;i++){
            if(count[i]==1){
            ans=i;
            }
        }
        return ans;
       
    }
};