class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>copy;
        copy.push_back(nums[0]);
        bool flag=0;
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                copy.push_back(nums[i]);
                count++;
            }    
        }
        for(int i=0;i<count;i++){
            nums[i]=copy[i];
        }
        return count;   
    }
};