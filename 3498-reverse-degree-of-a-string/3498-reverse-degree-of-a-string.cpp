class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
          int alpha=s[i]-'a'+1;
            int reverse = 26-alpha + 1;
            ans += reverse*(i + 1);
        }

        return ans;   
    }
};