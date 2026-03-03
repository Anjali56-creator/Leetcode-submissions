class Solution {
public:
    int xorOperation(int n, int start) {
        int c=0,a=0;
        vector<int>nums(n);
      for(int i=0;i<nums.size();i++){
        a=start+2*i;
        c=a^c;
      }  
      return c;
    }
};