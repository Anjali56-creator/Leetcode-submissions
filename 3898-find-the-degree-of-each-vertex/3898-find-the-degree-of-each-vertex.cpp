class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int c;
        vector<int>ans;
        for(int i=0;i<matrix.size();i++){
            c=0;
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==1)
                c++;
                // else
                // ans.push_back(0);
            }
            ans.push_back(c);
        }
        return ans;
    }
};