class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            int temp=i;

            bool flag=1;
            while(temp){
                int d=temp%10;
                temp/=10;
                if(d==0){
                    flag=0;
                    break;
                }
                if(i%d==0)continue;
                else{
                    flag=0;
                    break;
                }
                
            }
            if(flag)ans.push_back(i);


        }
        return ans;
        
    }
};