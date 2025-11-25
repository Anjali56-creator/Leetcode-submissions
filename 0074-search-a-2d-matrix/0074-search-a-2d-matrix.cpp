class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int start=0,end=n*m-1;
        while(start<=end){
         int   mid=(start+end)/2;
            int row_index=mid/m;
            int col_index=mid%m;
            if(matrix[row_index][col_index]==target)
            return true;
            else if(matrix[row_index][col_index]<target)
            start=mid+1;
            else
            end=mid-1;
        }
        return false;
    }

};