class Solution {
public:
    bool isprime(int n){
        if(n<=1)
        return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0)
            return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int result=0;
        for(int i=left;i<=right;i++){
            int count=0;
            int temp=i;
            //binary
            while(temp){
             int d=temp&1;
             if(d)count++;
             temp>>=1;
            }
           if( isprime(count))result++;

        }
        
        return result;
    }
};