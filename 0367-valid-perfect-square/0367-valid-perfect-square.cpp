class Solution {
public:
    bool isPerfectSquare(int num) {
        int a=pow(num,0.5);
        
        if((a*a)%num==0)
        return true;
        else
        return false;
    }
};