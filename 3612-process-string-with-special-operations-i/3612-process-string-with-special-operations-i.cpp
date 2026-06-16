class Solution {
public:
    string processStr(string s) {
        string result="";
        for(char i : s){
            if(i=='*'){
                if(!result.empty())
                result.pop_back();
            }
            else if(i=='#'){
            result+=result;
            }
            else if(i=='%'){
            reverse(result.begin(),result.end());
            }
            else{
                result.push_back(i);
            }
        }
        return result;
    }
};