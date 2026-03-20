class Solution {
public:
    int bfs(vector<vector<int>>& grid, queue<pair<int,int>>& q,
            vector<vector<int>>& status, int m, int n) {

        while(!q.empty()){
            pair<int,int> p = q.front();
            q.pop();

            int i = p.first;
            int j = p.second;

            // RIGHT
            if(j+1 < n && grid[i][j+1]==1){
                if(status[i][j+1]==-1){
                    status[i][j+1] = status[i][j] + 1;
                    grid[i][j+1] = 2;
                    q.push({i, j+1});
                }
            }

            // LEFT
            if(j-1 >= 0 && grid[i][j-1]==1){
                if(status[i][j-1]==-1){
                    status[i][j-1] = status[i][j] + 1;
                    grid[i][j-1] = 2;
                    q.push({i, j-1});
                }
            }

            // UP
            if(i-1 >= 0 && grid[i-1][j]==1){
                if(status[i-1][j]==-1){
                    status[i-1][j] = status[i][j] + 1;
                    grid[i-1][j] = 2;
                    q.push({i-1, j});
                }
            }

            // DOWN
            if(i+1 < m && grid[i+1][j]==1){
                if(status[i+1][j]==-1){
                    status[i+1][j] = status[i][j] + 1;
                    grid[i+1][j] = 2;
                    q.push({i+1, j});
                }
            }
        }

        int flag = 0;
        int ans = 0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    flag = 1;
                }
                if(status[i][j] > ans){
                    ans = status[i][j];
                }
            }
        }

        if(flag==1)
            return INT_MAX;
        else
            return ans;
    }

    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int count2 = 0, fresh = 0;
        queue<pair<int,int>> q;
        vector<vector<int>> status(m, vector<int>(n, -1));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){   // FIXED (was j<m ❌)

                if(grid[i][j]==2){
                    count2++;
                    q.push({i,j});
                    status[i][j] = 0;
                }

                if(grid[i][j]==1){
                    fresh++;
                }
            }
        }

        // 🔥 EDGE CASE FIX (your main bug)
        if(count2 == 0 && fresh > 0)
            return -1;

        if(fresh == 0)
            return 0;

        int moves = bfs(grid, q, status, m, n);

        if(moves==INT_MAX)
            return -1;
        else
            return moves;
    }
};