class Solution {
public:
    int scoreOfString(string s) {
        int c=0;
        for(int i=0;i<s.size()-1;i++){
           c+=abs(s[i]-s[i+1]);
        }
        return c;
    }
};