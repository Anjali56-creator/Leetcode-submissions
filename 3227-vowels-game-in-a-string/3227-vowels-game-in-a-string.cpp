class Solution {
public:
    bool doesAliceWin(string s) {
         for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') //vowels
            return true;
        }
        return false;
    }
};