class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int left=0,ans=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            if(mp[s[i]]==1) 
             ans=max(ans,i-left+1);
            else{
                while(mp[s[i]]>=2){
                 mp[s[left]]--;
                 if(mp[s[left]]==0)
                mp.erase(s[left]);
                left++;
                }
              
            }
        }
        return ans;
    }
};