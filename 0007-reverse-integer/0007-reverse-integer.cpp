class Solution {
public:
    int reverse(int x) {
        int rev=0,a;
        while(x!=0){
            a=x%10;
            x=x/10;
            if(rev>INT_MAX/10||rev<INT_MIN/10)
            return 0;
            rev=rev*10+a;
        }
        return rev;
    }
};