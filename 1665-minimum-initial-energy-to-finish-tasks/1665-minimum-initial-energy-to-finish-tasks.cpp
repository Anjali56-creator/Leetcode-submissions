class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
      sort(tasks.begin(), tasks.end(),
   [](vector<int>& a, vector<int>& b) {
    return (a[1] - a[0]) > (b[1] - b[0]);
    });
        int energy=0,ans=0;
        for(int i=0;i<tasks.size();i++){
             int actual = tasks[i][0];
            int minimum = tasks[i][1];
            if (energy < minimum) {
                ans += (minimum - energy);
                energy = minimum;
            }
            energy -= actual;
        }
        return ans;
        }
 };