class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++){
            char c=s[i];
            int index=c-'a';
            freq[index]++;
        }
        int count=0;
        for(int i = 0; i < 26; i++) {
            if(freq[i]!=0){
                if(count==0)
                    count=freq[i];
                    else if(freq[i]!=count)
                    return false;
            }
        }
        return true;
    }
};