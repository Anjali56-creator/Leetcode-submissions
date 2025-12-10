class Solution {
public:
    bool isAnagram(string s, string t) {
        int f[26]={0};
        if(s.size()!=t.size())
        return false;
        for(int i=0;i<s.size();i++){
            f[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            f[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(f[i]!=0)
            return false;
        }
        return true;
    }
};