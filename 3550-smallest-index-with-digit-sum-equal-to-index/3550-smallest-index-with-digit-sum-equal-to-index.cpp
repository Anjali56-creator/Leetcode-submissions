class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int a=nums[i];
            int sum=0;
            while(a){
                int p=a%10;
                a/=10;
                sum+=p;
            }
            if(sum==i) return i;
        }
        return -1;
    }
};