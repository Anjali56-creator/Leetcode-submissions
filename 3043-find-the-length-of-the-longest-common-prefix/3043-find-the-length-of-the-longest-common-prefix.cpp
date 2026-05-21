class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
         unordered_set<int> st;
        for(int num : arr1) {
            while(num > 0) {
                st.insert(num);
                num /= 10;
            }
        }
        int ans = 0;
        for(int num : arr2) {
            while(num > 0) {
                if(st.count(num)) {
                    ans = max(ans, (int)log10(num) + 1);
                    break;
                }
                num /= 10;
            }
        }
        return ans;
    }
};