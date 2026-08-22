class Solution {
public:
    bool checkDivisibility(int n) {
        int original=n;
        int mul=1,sum=0;
        while(n){
            int a=n%10;
            sum+=a;
           // if(a!=0)
            mul=mul*a;
            n/=10;
           
        }
        return (original % (mul+sum)==0 );
    }
};