class Solution {
public:
    int winner(vector<int>& nums, int l, int r) {
        if (l == r)
         return nums[l];

        int pickLeft  = nums[l] - winner(nums, l + 1, r);
        int pickRight = nums[r] - winner(nums, l, r - 1);

        return max(pickLeft, pickRight);
    }

    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        return winner(nums, 0, n - 1) >= 0;
    }
};