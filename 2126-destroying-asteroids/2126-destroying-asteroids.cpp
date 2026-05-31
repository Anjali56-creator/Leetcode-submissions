class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long m=mass;
        sort(asteroids.begin(),asteroids.end());
        if(m<asteroids[0])
        return 0;
        else
        {
            for(int i=0;i<asteroids.size();i++){
               if(m<asteroids[i])
               return false;
               m+=asteroids[i];
            }
        }
        return 1;
    }
};