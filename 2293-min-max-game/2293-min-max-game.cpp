class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n=nums.size();
        
        while(n!=1){
            vector<int>newNums;
            for(int i=0;i<n/2;i++){
                if(i%2==0){
                 int a=min(nums[2*i],nums[2*i+1]);
                 newNums.push_back(a);
                }
                else{
                     int a=max(nums[2*i],nums[2*i+1]);
                     newNums.push_back(a);
                }
               
            }
            nums=newNums;
            n=nums.size();
            
        }
        return nums[0];
    }
};