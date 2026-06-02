class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int l=landStartTime.size(),w=waterStartTime.size();
        int s=INT_MAX;

        for(int i=0;i<l;i++){ 
             int a=landStartTime[i]+landDuration[i];
            for(int j=0;j<w;j++){
               
                if(a>=waterStartTime[j])
                a+=waterDuration[j];
                else{
                    a+=((waterStartTime[j]-a)+waterDuration[j]);
                }
                int b=waterStartTime[j]+waterDuration[j];
                if(b>=landStartTime[i])
                b+=landDuration[i];
                else b+=(landStartTime[i]-b)+landDuration[i];
                s=min(s,min(a,b));   
                a=landStartTime[i]+landDuration[i];
            }
        }
        return s;
    }
};