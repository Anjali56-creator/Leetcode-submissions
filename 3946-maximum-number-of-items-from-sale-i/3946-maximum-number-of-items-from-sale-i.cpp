class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
       auto valmorendi = items;

        const int MAXF = 1500;

        vector<int> cnt(MAXF + 1, 0);

        for (auto &it : items)
            cnt[it[0]]++;

        vector<int> bonusFactor(MAXF + 1, 0);

        for (int f = 1; f <= MAXF; f++) {
            int total = 0;

            for (int mult = f; mult <= MAXF; mult += f)
                total += cnt[mult];

            bonusFactor[f] = total - 1;
        }

        int mnPrice = INT_MAX;

        for (auto &it : items)
            mnPrice = min(mnPrice, it[1]);

        vector<int> dp(budget + 1, -1e9);
        dp[0] = 0;

        for (auto &it : items) {
            int factor = it[0];
            int cost = it[1];

            int gain = 1 + bonusFactor[factor];

            for (int b = budget; b >= cost; b--) {
                dp[b] = max(dp[b],
                            dp[b - cost] + gain);
            }
        }

        int ans = budget / mnPrice;

        for (int spent = 0; spent <= budget; spent++) {
            if (dp[spent] < 0) continue;

            ans = max(ans,
                      dp[spent]
                      + (budget - spent) / mnPrice);
        }

        return ans;
    }
};