class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        vector<int>status(n,-1);
        queue<int>q;
        q.push(0);
        status[0]=0;
        while(!q.empty()){
            int x=q.front();
            q.pop();
            int m=nums[x];
            for(int i=0;i<=m;i++){
                int y=x+i;
                if(status[y]==-1){
                    status[y]=status[x]+1;
                    q.push(y);
                    if(y==n-1){
                    return status[y];
                    }
                }
            }
        }
        return -1;
    }
};