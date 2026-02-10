class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size(),sum=0;
        int maxv=salary[0],minv=salary[0];
        for(int i=0;i<n;i++){
            maxv = max(maxv,salary[i]);
            minv = min(minv,salary[i]);
            sum += salary[i];
        }
        return (double) (sum-(maxv+minv))/(n-2);
    }
};