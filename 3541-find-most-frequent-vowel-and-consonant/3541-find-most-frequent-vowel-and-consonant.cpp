class Solution {
public:
    int maxFreqSum(string s) {
       unordered_map<int,int>vowel;
       unordered_map<int,int>conso;
       int max_vowel=0,max_conso=0;
       for(int i=0;i<s.size();i++){
           if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
           vowel[s[i]]++;
           else
           conso[s[i]]++;
       } 

       for(auto p :vowel)  max_vowel=max(max_vowel,p.second);
       for(auto p :conso)  max_conso=max(max_conso,p.second);
       return max_vowel+max_conso;
      
    }
};