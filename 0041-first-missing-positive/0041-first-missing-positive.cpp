class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         unordered_set<int>m;
        for(int num:nums){
            m.insert(num);
        }
        for(int i=1;i<=nums.size();i++){
            if(m.count(i)==0)
            return i;
        }
        return nums.size()+1;
    }
};