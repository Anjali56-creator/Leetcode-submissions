class Solution {
public:
    bool isAnagram(string s, string t) {
      vector<int>counting(256,0);
      for(int i=0;i<s.length();i++){
        counting[s[i]]++;
      }  
      for(int i=0;i<t.length();i++){
        counting[t[i]]--;
      }
      for(int i=0;i<256;i++){
        if(counting[i]!=0)
        return false;
      }
      return true;
    }
};