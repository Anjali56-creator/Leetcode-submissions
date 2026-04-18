class Solution {
public:
int rev(int x){
    int a=0;
    while(x!=0){
    a=a*10+x%10;
    x/=10;
    }
    return a;
}
    int mirrorDistance(int n) {
        return abs(n-rev(n));
    }
};