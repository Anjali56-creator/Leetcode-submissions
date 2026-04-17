class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>mp;
        unordered_map<string,char>mp1;
        int i=0,j=0;
        while(i<s.size()&&j<pattern.size()){
            string temp="";
            while(i<s.size()&&s[i]!=' '){
                temp.push_back(s[i]);
                i++;

            }
            char ch=pattern[j];
            if(mp.find(ch)==mp.end() && mp1.find(temp)==mp1.end()){
                mp[ch]=temp;
                mp1[temp]=ch;
                j++;
            }
            else{
                if(mp[ch]!=temp || mp1[temp]!=ch)
                return 0;
                j++;
            }
            i++;
        }
        if(i<s.size()||j<pattern.size())
        return 0;

        return 1;

    }
};