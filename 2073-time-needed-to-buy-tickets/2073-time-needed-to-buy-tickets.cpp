class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n=tickets.size(),time=0;
        for(int i=0;i<=k;i++){
            time+=min(tickets[i],tickets[k]);
        }
        for(int i=k+1;i<n;i++){
            time+=min(tickets[k]-1,tickets[i]);
        }
        return time;
    }
};