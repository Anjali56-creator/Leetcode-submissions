class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        for(int i=0;i<s2.length();i++){
            if(s1[i]!=s2[i]){
            for(int j=0;j<s2.length();j++){
                if (abs(j-i)==2 && s1[j] == s2[i]){
                    swap(s1[i],s1[j]);
                    break;
                }
                }
            }
        }
    return s1==s2;
    }
};