class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
        return 0;
        for(int i=0;i<s.size();i++){
            rotate(s.begin(),s.end()-1,s.end());
            if(s==goal)
            return 1;
        }
        return 0;
    }
};