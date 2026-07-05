class Solution {
public:
    int maxDistinct(string s) {
        int a=1;
        sort(s.begin(),s.end());
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1])
            a++;
        }
        return a;
    }
};