class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int c=0;
        for(string pattern : patterns){
            if(word.find(pattern)!=string::npos)
            c++;
        }
        return c;
    }
};