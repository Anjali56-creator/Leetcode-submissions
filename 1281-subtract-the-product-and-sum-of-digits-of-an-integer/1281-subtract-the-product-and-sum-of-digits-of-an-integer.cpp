class Solution {
public:
    int subtractProductAndSum(int n) {
        int a=0,sum=0,mul=1;
       while(n>0){
        a=n%10;
        mul=mul*a;
        sum+=a;
        n/=10;
       } 
       return (mul-sum);
    }
};