class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char ch:s){
            if(ch=='(' || ch=='[' || ch=='{')
            st.push(ch);


            else{
                if(st.empty()) return 0;
                char top=st.top();
                st.pop();
                if((ch==')' && top!='(') || (ch=='}' && top!='{') ||(ch==']' && top!='[')) return 0;
            }
            
        }
        return st.empty();
    }
};