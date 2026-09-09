class Solution {
public:
    int countKDifference(vector<int>& arr, int k) {
        unordered_map<int,int>freq;
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            if(freq.find(arr[i]+k)!=freq.end())
            cnt+=freq[arr[i]+k];

            if(freq.find(arr[i]-k)!=freq.end())
            cnt+=freq[arr[i]-k];

            freq[arr[i]]++;

        }
        return cnt;
    }
};