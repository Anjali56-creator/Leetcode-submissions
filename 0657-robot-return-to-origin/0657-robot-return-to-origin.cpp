class Solution {
public:
    bool judgeCircle(string moves) {
        int A=0,B=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U')
            A++;
            if(moves[i]=='D')
            A--;
             if(moves[i]=='L')
            B++;
            if(moves[i]=='R')
            B--;
        }
        if(A==0&&B==0)
        return 1;
        return 0;
    }
};