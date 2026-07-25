class Solution {
public:
    int maxProduct(int n) {
        vector<int>ans;
       while(n){
        int a=n%10;
        n/=10;
        ans.push_back(a);
       } 
       int answer=0;
       for(int i=0;i<ans.size();i++){
        for(int j=i+1;j<ans.size();j++){
            answer=max(answer,ans[i]*ans[j]);
        }
       }
       return answer;
    }
};