class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>d;
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<k-1;i++){
            if(d.empty())
            d.push_back(i);
            else{
                while(!d.empty() && nums[i]>nums[d.back()])
                    d.pop_back();
                    d.push_back(i);
                
            }
        }
        for(int i=k-1;i<n;i++){
            while(!d.empty() && nums[i]>nums[d.back()])
                d.pop_back();
                d.push_back(i);
            
            if(d.front()<=i-k)
            d.pop_front();
            ans.push_back(nums[d.front()]);
        }
        return ans;
    }
};