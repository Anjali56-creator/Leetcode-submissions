class Solution {
public:
    int findSet(int a, vector<int>& parent) {
        while (a != parent[a]) {
            a = parent[a];
        }
        return a;
    }
    void Union(int a, int b, vector<int>& parent) {
        int x = findSet(a, parent);
        int y = findSet(b, parent);
        if (x != y) {
            parent[y] = x;
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> parent(n);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (isConnected[i][j] == 1) {
                    Union(i, j, parent);
                }
            }
        }
        unordered_set<int> e;
        for (int i = 0; i < n; i++) {
            e.insert(findSet(i, parent));
        }

        return e.size();
    }
};