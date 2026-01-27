class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        int minDiff = INT_MAX;
        for (int i=0;i<arr.size()-1;i++) {
            int e=arr[i+1]-arr[i];
            if (e<minDiff)
                minDiff=e;
        }
        for (int i=0; i<arr.size()-1; i++) {
            int e = arr[i+1]-arr[i];
            if (e == minDiff)
                ans.push_back({arr[i],arr[i+1]});
        }
        return ans;
    }
};