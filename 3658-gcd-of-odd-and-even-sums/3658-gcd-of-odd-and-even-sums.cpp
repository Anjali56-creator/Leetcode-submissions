class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd=0,sumEven=0;
        sumEven=n*n;
        sumOdd=n*(n+1);

        return gcd(sumOdd,sumEven);
    }
};