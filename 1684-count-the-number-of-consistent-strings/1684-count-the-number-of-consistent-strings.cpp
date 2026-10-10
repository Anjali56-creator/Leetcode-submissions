class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
       unordered_map<char,int>mp;
       int cnt=0;
       for(int i=0; i < allowed.size();i++){
        mp[allowed[i]]++;
       } 
       for(int i=0;i<words.size();i++){
        for(char c:words[i]){
            if(mp.find(c)==mp.end()){
            cnt++;
            break;
            }
        }
       }
       return words.size()-cnt;
    }
};