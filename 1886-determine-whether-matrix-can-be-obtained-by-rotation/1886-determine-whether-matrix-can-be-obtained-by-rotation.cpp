class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        for(int k=0;k<4;k++){
            if(mat==target)
            return true;
        //transpose
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        //reverse
        for(int i=0;i<mat.size();i++){
            int start=0,end=n-1;
            while(start<end){
            swap(mat[i][start],mat[i][end]);
            start++,end--;
            }
        }
        }
     return false;
    }
};