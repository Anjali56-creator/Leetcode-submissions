class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++){
            char c=s[i];
            int index=c-'a';
            freq[index]++;
        }
        for(int i = 0; i < s.size(); i++) {
            if(freq[s[i] - 'a'] == 1)
                return i;
        }
        return -1;
      
    }
};