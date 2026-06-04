class Solution {
public:
int waviness(int n){
    if(n<100) return 0;
    int next=n%10;
    n/=10;
    int curr=n%10;
    n/=10;
    int c=0;
    while(n){
        int pre=n%10;
        if((curr>pre && curr > next)|| (curr <pre && curr <next))
        c++;
        next=curr;
        curr=pre;
        n/=10;
    }
    return c;
}
    int totalWaviness(int num1, int num2) {
        if(num2<100)
        return 0;
        int total=0;
        for(int i=num1;i<=num2;i++){
            total+=waviness(i);
        }
        return total;
    }
};