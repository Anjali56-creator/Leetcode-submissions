class Solution {
public:
    bool detectCapitalUse(string s) {
        
        int count=0;
      for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z')
        count++;
    }
    if(count==s.size())
    return true;
    else if(count==0)
    return true;
    else if(count==1)
    return true;
    else
    return false;
    }
    
};