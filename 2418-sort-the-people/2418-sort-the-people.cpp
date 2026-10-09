class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
       vector<string>ans;
       unordered_map<int,string>mp;
       vector<pair<int, string>> people;

       for (int i = 0; i < heights.size(); i++) {
           people.push_back({heights[i], names[i]});
        }
        sort(people.begin(),people.end(),greater<pair<int,string>>());
       for(auto i=0;i<people.size();i++){
        ans.push_back(people[i].second);
       } 
       return ans;
    }
};