class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        vector<bool> used(nums2.size(), false);
        int n=nums1.size(),m=nums2.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]&&!used[j]) {
                    ans.push_back(nums1[i]);
                    used[j]=true;
                    break;
                }
            }
        }
        return ans;
    }
};