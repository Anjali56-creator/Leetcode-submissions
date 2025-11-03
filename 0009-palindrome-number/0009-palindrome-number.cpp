class Solution {
public:
    bool isPalindrome(int x) {
        int a,long long ans=0;
        int n=x;
        while(n>0){
        a=n%10;
        n/=10;
        ans=10*ans+a;
        }
        if(ans==x)
        return true;
        else
        return 
        false;
        
    }
};