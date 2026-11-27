class Solution {
public:
long long power (long long base,long long exp){
    long long MOD=1e9+7;
    long long  result=1;
    while(exp>0){
        if(exp%2==1){
            result=(result*base)%MOD;
        }
        base=(base*base)%MOD;
        
        exp/=2;
    }
    return result;
}
    int countGoodNumbers(long long n) {
       long long a=(n+1)/2;
       long long b=n/2;
       long long MOD=1e9+7;
       int ans= (power(5,a)*power(4,b)) % MOD;
       return ans % MOD;
    }
};