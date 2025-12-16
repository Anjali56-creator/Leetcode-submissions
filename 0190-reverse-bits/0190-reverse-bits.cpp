class Solution {
public:
    int reverseBits(int n) {
        unsigned int x = n;   
        unsigned int ans = 0;

        for (int i = 0; i < 32; i++) {
            ans = (ans << 1) | (x & 1);
            x >>= 1;
        }
        return (int)ans;
    }
};