class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
       const int m=1e9+7;
        for(auto &q:queries){
            int l=q[0];
            int r=q[1];int k=q[2]; int v=q[3];
        
       
        while(l<=r){
            nums[l]=(1LL*nums[l]*v)%m;
            l=l+k;
        }
        }
        int result=0;
        for(int &x:nums){
            result^=x;
        }
        return result;
        
    }
};