class Solution {
public:
    int minOperations(string s) {
        int c2=0,c1=0;
        for(int i=0;i<s.length();i++){
               
            if(i % 2 == 0){
                if(s[i] != '0') c1++;
                if(s[i] != '1') c2++;
            }
            else{
                if(s[i] != '1') c1++;
                if(s[i] != '0') c2++;
            }
        }
        return min(c2,c1);
    }
};