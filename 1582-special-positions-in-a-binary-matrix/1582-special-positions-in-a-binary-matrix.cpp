class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int a=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                int r=0,c=0;
                for(int k=0;k<mat[0].size();k++){
                    r+=mat[i][k];
                }
                 for(int k=0;k<mat.size();k++){
                    c+=mat[k][j];
                }
                if(mat[i][j] == 1 && r == 1 && c== 1)
                a++;
            }
        }
        return a;
    }
};