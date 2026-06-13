class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        int sum=0;
        for(int i=0;i<words.size();i++){
            sum=0;
            for(int j=0;j<words[i].size();j++){
                sum+=weights[words[i][j]-'a'];
            }
            sum%=26;
            ans.push_back('a'+25-sum);
        }
        
        return ans;
    }
};