class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10); 
        string temp;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != ' ') {
                temp += s[i];
            }
            else {

                int pos = temp.back() - '0';   
                temp.pop_back();             
                ans[pos] = temp;              
                temp.clear();                  
            }
        }

        int pos = temp.back() - '0';
        temp.pop_back();
        ans[pos] = temp;

        string result;
        for(int i = 1; i < 10; i++) {
            if(ans[i].size() > 0) {
                result += ans[i];
                result += ' ';
            }
        }

        result.pop_back();   
        return result;
    }
};
