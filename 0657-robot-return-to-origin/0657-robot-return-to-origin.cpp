class Solution {
public:
    bool judgeCircle(string moves) {
        int a=0,b=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U')
            a++;
            if(moves[i]=='D')
            a--;
            if(moves[i]=='L')
            B++;
            if(moves[i]=='R')
            b--;
        }
        if(a==0&&b==0)
        return 1;
        return 0;
    }
};