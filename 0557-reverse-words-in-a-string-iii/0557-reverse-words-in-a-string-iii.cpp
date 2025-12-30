class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        while(s.size()>i){
              int start = i;
            while (i<s.size()&&s[i]!= ' ')
                i++;
            reverse(s.begin()+start,s.begin()+i);
            i++;
        }
        return s;
    }
};