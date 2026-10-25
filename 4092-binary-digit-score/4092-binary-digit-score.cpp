class Solution {
public:
    int calculateScore(int a, int b) {
        int s1=0,s2=0;
       while(a){
           int bin=a%2;
           a/=2;
           if(bin==1) s1++;
       } 
           while(b){
           int bin=b%2;
           b/=2;
           if(bin==1) s2++;
       } 
        if(s1>=s2) return s1*s2;
        return s2/s1;
        
    }
};