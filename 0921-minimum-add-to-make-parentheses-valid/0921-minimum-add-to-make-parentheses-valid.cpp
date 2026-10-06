class Solution {
public:
    int minAddToMakeValid(string s) {
       stack<char>st;
       int cnt=0;
       for(char c:s){
        if(c=='(') st.push(c);
        else{
            if(st.empty()) cnt++;
            else st.pop();
        }
       }
       return cnt+st.size();
    }
};