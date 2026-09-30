class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>ans;
        int n=code.size();
        if(k==0){
        for(int i=0;i<code.size();i++){
            ans.push_back(0);
        }
        
        return ans;
        }

     
        if(k>0){
            for(int i=0;i<n;i++){
                int sum=0;
                for(int j=1;j<=k;j++){
               sum+=code[(i+j)%n];
            }
            ans.push_back(sum);
            sum=0;
            }
            return ans;
        }

        if(k<0){
            for(int i=0;i<n;i++){
                 int sum2=0;
                for(int j=1;j<=-k;j++){
                sum2+=code[(i-j+n)%n];
            }
                 ans.push_back(sum2);
            }
            return ans;
        }
        return ans;
    }
};