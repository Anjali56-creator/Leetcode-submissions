class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int f[26]={0};
        for(int i=0;i<magazine.size();i++){
            char c=magazine[i];
            f[c-'a']++;
        }
         for(int i=0;i<ransomNote.size();i++){
            char c=ransomNote[i];
            if(f[c-'a']==0)
            return false;
            f[c-'a']--;
        }
        return true;;
    }
};