class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=moves.size();
        int b=0,l=0,r=0,ans=0;
        for(int i=0;i<n;i++){
            if(moves[i]=='L')
            l++;
            if(moves[i]=='R')
            r++;
            if(moves[i]=='_')
            b++;
            ans=abs(l-r)+b;
        }
        return ans;

    }
};