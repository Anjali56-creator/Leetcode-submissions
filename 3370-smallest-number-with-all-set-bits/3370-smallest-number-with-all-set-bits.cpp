class Solution {
public:
    int smallestNumber(int n) {
        int c=0;
        for(int i=1;i<=31;i++)
        {
            long long val=(1<<i)-1;
            if(val>=n){
            c=val;
            break;
            }
        }
        return c;
        
    }
};