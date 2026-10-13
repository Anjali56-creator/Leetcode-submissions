class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        unordered_set<int>st;
        for(int x:nums){
            st.insert(x);
        }
        for(int i=1;i<=nums.size();i++){
           if(!st.count(i))
           ans.push_back(i);
        }

        return ans;
    }
};