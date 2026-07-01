class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
          vector<int>adj[n];
        vector<int> InDeg(n, 0);
        for(int i=0;i<pre.size();i++){
            
            adj[pre[i][1]].push_back(pre[i][0]);
            InDeg[pre[i][0]]++;
        }
        
        //kahn's algo
        // if size==n (cycle is not present therefore we can complete all task)
        queue<int>q;
        for(int i=0;i<n;i++)
        if(!InDeg[i])
        q.push(i);
       vector<int>ans;
        
        
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            ans.push_back(node);
            
            for(int j=0;j<adj[node].size();j++)
            {
                InDeg[adj[node][j]]--;
                if(!InDeg[adj[node][j]])
                q.push(adj[node][j]);
            }
        }
        return ans.size() == n;
    }
};