class Solution {
public:
    int countDigits(int num) {
        int cnt=0;
        int original=num;
        while(original){
            int a=original%10;
            if(num%a==0) cnt++;
            original/=10;
        }
        return cnt;
    }
};