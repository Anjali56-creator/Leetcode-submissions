class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>ans={0,0};
        int a=0;
        int n=mat.size();
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1) cnt++;
                a=max(a,cnt);
            }
            if(cnt>ans[1])
            ans={i,cnt};
        }
        return ans;
    }
};