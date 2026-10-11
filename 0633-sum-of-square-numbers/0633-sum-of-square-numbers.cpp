class Solution {
public:
    bool judgeSquareSum(int c) {
       long long sum=0 ,start=0, end=ceil(sqrt(c));
       if(c==0) return 1;
       else{
       while(end){
        sum=pow(start,2)+pow(end,2);
        if(sum==c) return 1;
        else if(sum<c) start++;
        else end--;
       } 
       }
       return 0;
    }
};