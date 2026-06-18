class Solution {
public:
    double angleClock(int hour, int minutes) {
        double a=abs((30*hour)-(5.5*minutes));
        if(a>180){
         double ans=abs(360-a);
         return ans;
        }
        return a;
    }
};