class Solution {
public:
    int totalMoney(int n) {
        int weeks=n/7;
        int days=n%7;
        int ans=weeks*28+7*(weeks*(weeks-1)/2);
        ans += days*(weeks+1)+days*(days-1)/2;
        return ans;
    }
};