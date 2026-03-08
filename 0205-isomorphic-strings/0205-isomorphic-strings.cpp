class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int a[256]={0};
        int b[256]={0};
        for(int i=0;i<t.size();i++){
            if(a[s[i]]!=b[t[i]])
            return 0;
            a[s[i]]=i+1;
            b[t[i]]=i+1;
        }
        return 1;
    }
};