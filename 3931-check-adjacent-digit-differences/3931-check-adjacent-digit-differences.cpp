class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int ans=0;
       for(int i=0;i<s.length()-1;i++){
           int a=abs(s[i]-s[i+1]);
           ans=max(ans,a);
           
       }
        if(ans<=2)
        return true;
        return false;
    }
};