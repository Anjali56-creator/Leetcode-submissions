class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitSum=0,squareSum=0;
        while(n){
            int a=n%10;
            n/=10;
            digitSum+=a;
            squareSum+=a*a;
        }
        if(squareSum-digitSum>=50) return 1;
        return 0;
    }
};