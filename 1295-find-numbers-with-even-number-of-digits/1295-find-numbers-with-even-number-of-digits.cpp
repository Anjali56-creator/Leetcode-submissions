class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int a=0;
        for(int i=0;i<nums.size();i++){
            int c=0;
            while(nums[i]){
                nums[i]/=10;
                c++;
            }
            if(c%2==0)
            a++;
        }
        return a;
    }
};