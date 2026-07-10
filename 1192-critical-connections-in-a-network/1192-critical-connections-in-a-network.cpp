class Solution {
public:

void dfs(int node,int parent,vector<vector<int>>&adj,vector<int>&disc,vector<int>&low,vector<bool>&visited,vector<vector<int>>&bridge,int &count){

    disc[node]=low[node]=count;
    visited[node]=1;

    for(int j=0;j<adj[node].size();j++){
        int neib=adj[node][j];
        if(neib==parent)
        continue;

        else if(visited[neib]){
            low[node]=min(low[node],low[neib]);
        }
        else{
            count++;
            dfs(neib,node,adj,disc,low,visited,bridge,count);

            if(low[neib]>disc[node])
            {
                vector<int>temp;
                temp.push_back(node);
                temp.push_back(neib);
                bridge.push_back(temp);
            }

            low[node]=min(low[node],low[neib]);
        }


    }

}
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<vector<int>>adj(n);
        for(int i=0;i<connections.size();i++){
            int u=connections[i][0];
            int v=connections[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<vector<int>>bridge;
        vector<int>disc(n);
        vector<int>low(n);

        vector<bool>visited(n,0);
        int count=0;
        dfs(0,-1,adj,disc,low,visited,bridge,count);

        return bridge;
    }
};