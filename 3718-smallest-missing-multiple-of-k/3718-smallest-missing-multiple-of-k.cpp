class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>least;
        for(int i=0;i<nums.size();i++){
            least.insert(nums[i]);

        }
        int num=k;
         for(int i=k;i<=200;i+=k){
        if(!least.count(i))
        return i;
    }
    return k;
    }
};