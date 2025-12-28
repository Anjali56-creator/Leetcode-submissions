class Solution {
public:
    int commonFactors(int a, int b) {
        int c=0;
        if(a==1&&b==1)
        return 1;
        for(int i=1;i<a*b;i++){
            if(a%i==0&&b%i==0)
            c++;
        }
        return c;
    }
};