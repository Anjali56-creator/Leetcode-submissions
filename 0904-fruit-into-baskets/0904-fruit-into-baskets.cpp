class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>mp;
        int left=0;
        int ans=0;
      for(int i=0;i<fruits.size();i++){
        mp[fruits[i]]++;
        if(mp.size()>2){
            mp[fruits[left]]--;
            if(mp[fruits[left]]==0){
                mp.erase(fruits[left]);
            }
            left++;
        }
        ans=max(ans,i-left+1);
      }
      return ans;

    }
};