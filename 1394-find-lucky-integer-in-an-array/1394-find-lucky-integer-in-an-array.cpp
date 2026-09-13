class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int x:arr){
            mp[x]++;
        }
        int ans=0;
        for(auto it :mp){
            if(it.first==it.second)
             ans=max(ans,it.first);
        }
         if(ans!=0) return ans;
        else
        return -1;
    }
};