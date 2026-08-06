class Solution {
public:

bool product(int n , int t){
    int mul=1;
    while(n){
        int a=n%10;
        n/=10;
        mul=mul*a;
    }
    if(mul%t==0)
    return 1;

    else
    return 0;
}
    int smallestNumber(int n, int t) {
        for(int i=n; ; i++){
            if(product(i,t))
            return i;
        }
        return 0;
    }
};