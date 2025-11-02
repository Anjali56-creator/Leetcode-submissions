class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            int sum=0,a;
        while(num>0){
            a=num%10;
            num=num/10;
            sum=sum+a;
        }
        num=sum;
    }
     return num;
    }
};