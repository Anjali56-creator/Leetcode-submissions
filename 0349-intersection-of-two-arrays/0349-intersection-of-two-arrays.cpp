class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int n=nums1.size(),m=nums2.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j] &&
                 find(ans.begin(), ans.end(), nums1[i]) == ans.end()) {
                    ans.push_back(nums1[i]);
                }
            }
        }
        return ans;
    }
};