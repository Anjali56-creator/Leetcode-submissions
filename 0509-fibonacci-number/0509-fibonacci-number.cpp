class Solution {
public:
int DAT[1000]={0};
    int fib(int n) {
       if(n<2)
       return n;
       else{
        if(DAT[n]==0){
            DAT[n]=(fib(n-1)+fib(n-2));
        }
        return (DAT[n]);
       } 
    }
};