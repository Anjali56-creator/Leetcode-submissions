class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int cnt=0;
        int n=arr.size();
       unordered_set<int>st;
       for(int n:arr){
        st.insert(n);
       }
       for(int i=1;i<arr[n-1];i++){
        if(!st.count(i)) cnt++;
        if(cnt==k) return i;
       }
       return arr[n-1]+k-cnt;
    }
};