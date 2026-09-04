class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=INT_MIN;
        int mini=INT_MAX;
        vector<int>maximum; vector<int>minimum;
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            maximum.push_back(maxi);
        }
        for(int i=n-1;i>=0;i--){
            mini=min(nums[i],mini);
            minimum.push_back(mini);
        }
        reverse(minimum.begin(),minimum.end());
        for(int i=0;i<maximum.size();i++){
            int ans=maximum[i]-minimum[i];
            if(ans<=k) return i;
            }        
        return -1;
        
    }
};