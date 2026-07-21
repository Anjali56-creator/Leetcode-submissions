class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        long long mul=0;
        while(n){
            long long a=n%10;
            if(a!=0){
                sum+=a;
                mul=mul*10+a;
            }
            n/=10;
        }
        int m=0;
        while(mul){
            long long a=mul%10;
            mul/=10;
            m=m*10+a;
        }
        return m*sum;
    }
};