class Solution {
public:
    int sumOfMultiples(int n) {
        int s=0;
        while(n){
            if(n%3==0||n%5==0||n%7==0)
            s+=n;
            n--;
        }
        return s;
    }
};