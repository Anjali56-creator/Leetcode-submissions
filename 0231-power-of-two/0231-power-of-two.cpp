class Solution {
public:
    bool isPowerOfTwo(int n) {
      while(n!=1){
            if(n<1)
            return false;
            if(n%2==1)
            return false;
            else
            n/=2;
        }
        return true;
    }
};