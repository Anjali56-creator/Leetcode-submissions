class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int n=x;
        while(x){
            int a=x%10;
            x/=10;
            sum+=a;
        }
        if(n%sum==0) return sum;
        return -1;
    }
};