class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int odd=0,even=0;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i] % 2 ==1) odd++;
            else even++;
        }
        if(even==0 || odd==0) return true;
        
        else{
        int minimum=*min_element(nums1.begin(),nums1.end());
        if(minimum % 2 == 1)
        return 1;
        else
        return 0;
        }
        return 0;
    }
};