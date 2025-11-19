class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> ans;
        long long p = 1;
        while(n>0) {
            int a= n % 10;
            if(a!= 0) {
                ans.push_back(a*p);
            }
            n /= 10;
            p*= 10;
        }
        sort(ans.rbegin(), ans.rend()); 
        return ans;
    }
};