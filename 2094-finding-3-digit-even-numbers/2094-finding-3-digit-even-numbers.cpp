class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
       vector<int>ans;
      int n=digits.size();
        unordered_map<int,int>mp;
        for(int x:digits){
         mp[x]++;
        }
        //int cnt=0;
      for(auto it:mp){
        int unit=it.first;
        if(unit%2!=0) continue;
        mp[unit]--;
        for(auto it1: mp){
            int hundred=it1.first;
           if(hundred==0 || mp[hundred]==0) continue;
           mp[hundred]--;
           for(auto it2:mp){
            int tens=it2.first;
            if(mp[tens]>0) ans.push_back(hundred*100+10*tens+unit);
           }
           mp[hundred]++;
        }
        mp[unit]++;
      }
      sort(ans.begin(),ans.end());
      return ans;

    }
};