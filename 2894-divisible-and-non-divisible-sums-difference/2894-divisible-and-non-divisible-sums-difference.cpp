class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1=0,num2=0;
        while(n){
            if(n%m!=0)
            num1+=n;
            else
            num2+=n;
            n--;
        }
        return (num1-num2);
    }
};