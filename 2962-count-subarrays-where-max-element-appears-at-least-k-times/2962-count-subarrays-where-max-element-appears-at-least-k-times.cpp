class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxEle=0,n=nums.size();
        for(int i=0;i<n;i++)
        maxEle=max(maxEle,nums[i]);

        long long total=0;
        int count=0,start=0,end=0;

        while(end<n)
        {
           // window length kab tk inc karna h jab tk maxelement k ke equal na hojaye
           if(nums[end]==maxEle)
           count++;
           while(count==k){
            total+=n-end;
            if(nums[start]==maxEle)
            count--;
            start++;
           }
           end++;
        }
        return total;
    }
};