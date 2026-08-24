class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;

        for(int i=0;i<asteroids.size();i++){
            while(ans.size()!=0 && asteroids[i]<0 && ans.back()>0 && ans.back()<abs(asteroids[i])){
                ans.pop_back();
            }

            if(ans.size()!=0 && asteroids[i]<0 && ans.back()>0 && abs(asteroids[i])==ans.back()){
                ans.pop_back();
                continue;
            }

            if(ans.size()!=0 && asteroids[i]<0 && ans.back()>abs(asteroids[i])){
                continue;
            }
            ans.push_back(asteroids[i]);
        }
        return ans;
    }
};