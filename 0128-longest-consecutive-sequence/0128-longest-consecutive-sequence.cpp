class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;

        sort(nums.begin(), nums.end());

        int curr = 1;
        int longest = 1;

        for(int i = 1; i < n; i++) {

            if(nums[i] == nums[i-1]) {
                continue;
            }

            if(nums[i] == nums[i-1] + 1) {
                curr++;
            }
            else {
                longest = max(longest, curr);
                curr = 1;
            }
        }

        return max(longest, curr);
    }
};