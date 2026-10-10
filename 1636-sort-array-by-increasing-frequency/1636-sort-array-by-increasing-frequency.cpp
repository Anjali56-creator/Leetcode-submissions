class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        vector<pair<int,int>>num;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            num.push_back({i.first,i.second});
        }
        sort(num.begin(), num.end(), [](pair<int,int> a, pair<int,int> b) {
          if(a.second == b.second)
            return a.first > b.first;
            return a.second < b.second;
          });
           for(int i=0;i<num.size();i++){
            for(int j=0;j<num[i].second;j++)
            ans.push_back(num[i].first);
       } 
      return ans; 
    }
};