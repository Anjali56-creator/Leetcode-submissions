class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(), piles.end());
        int ans=maxi;
        // for(int i=0;i<piles.size();i++){
        //     sum+=piles[i];
        // }
        int start=1;
        while(start<=maxi){
            int mid=start+(maxi-start)/2;
            long long total_time=0;
            for(int i=0;i<piles.size();i++){
                total_time+=(1LL*piles[i]+mid-1)/mid;
            }
            if(total_time<=h){
                 maxi=mid-1;
                ans=min(ans,mid);
            }
           
            else start=mid+1;
            
        }
        return ans;
    }
};