class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        int c=0;
        ans.push_back(s[0]);
       for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1])
        c++;
        else
        c=0;
        if(c>=2)
        continue;
        ans.push_back(s[i]);
       } 
       return ans;
    }
};