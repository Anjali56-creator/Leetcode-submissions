class Solution {
public:
    long long dp[101][101];

    long long solve(vector<int>& robots, vector<vector<int>>& factories, int i, int j) {
        if (i >= robots.size()) return 0;
        if (j >= factories.size()) return 1e15;

        if (dp[i][j] != -1) return dp[i][j];

        long long res = solve(robots, factories, i, j + 1);

        long long dist = 0;
        int pos = factories[j][0];
        int cap = factories[j][1];

        for (int k = 0; k < cap && i + k < robots.size(); k++) {
            dist += abs(robots[i + k] - pos);
            res = min(res, dist + solve(robots, factories, i + k + 1, j + 1));
        }

        return dp[i][j] = res;
    }

    long long minimumTotalDistance(vector<int>& robots, vector<vector<int>>& factories) {
        sort(robots.begin(), robots.end());
        sort(factories.begin(), factories.end());

        memset(dp, -1, sizeof(dp));
        return solve(robots, factories, 0, 0);
    }
};