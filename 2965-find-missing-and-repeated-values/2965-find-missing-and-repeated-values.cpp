class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
                vector<int> freq(n * n + 1, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                freq[grid[i][j]]++;
            }
        }

        int repeated = -1, missing = -1;

        for (int i = 1; i <= n * n; i++) {
            if (freq[i] == 2) repeated = i;
            if (freq[i] == 0) missing = i;
        }

        return {repeated, missing};
        
    }
};