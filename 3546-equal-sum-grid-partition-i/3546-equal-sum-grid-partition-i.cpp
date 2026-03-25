class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        long long sum=0;
        //total sum
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                sum+=grid[i][j];
            }
        }
        //rowwise sum
        long long pre=0;
        long long copy=sum;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                pre+=grid[i][j];
                copy-=grid[i][j];
            }
            if(copy==pre)
            return true;
        }
        pre=0;
        copy=sum;
        //columnwise sum
        for(int i=0;i<grid[0].size();i++){
            for(int j=0;j<grid.size();j++){
                pre+=grid[j][i];
                copy-=grid[j][i];
            }
            if(copy==pre)
            return true;
        }
        return false;
    }
};