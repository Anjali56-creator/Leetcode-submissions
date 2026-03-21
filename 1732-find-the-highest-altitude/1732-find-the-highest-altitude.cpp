class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0;
        int c=0,a=0;
        for(int i=0;i<gain.size();i++){
          ans=ans+gain[i];
           a=max(ans,c);
           c=a;
        }
        return a;
    }
};