class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>q;
        int n=tickets.size();
        int t=0;
        for(int i=0;i<n;i++){
            q.push(i);
        }
        while(tickets[k]!=0){
            tickets[q.front()]--;
            if(tickets[q.front()])
            q.push(q.front());
            q.pop();
            t++;
        }
        return t;
    }
};