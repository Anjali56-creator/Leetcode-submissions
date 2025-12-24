class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
      int n=apple.size(),m=capacity.size();
      int sumApple=0,sumcapacity=0,c=0;
     sort(capacity.begin(), capacity.end(), greater<int>());
     for(int i=0;i<n;i++){
        sumApple+=apple[i];
     }
     for(int i=0;i<m;i++){
        sumcapacity+=capacity[i];
        c++;
        if(sumApple<=sumcapacity)
        break;
     }
     return c;
    }
};