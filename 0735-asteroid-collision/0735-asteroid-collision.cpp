class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> sq;
        for (int i = 0; i<n; i++){
            if (asteroids[i] > 0 || sq.empty()){
                sq.push(asteroids[i]);
            }
            else{
                while (!sq.empty() && sq.top() > 0 && sq.top() < abs(asteroids[i])){
                    sq.pop();
                }
                if (!sq.empty() && abs(asteroids[i]) == sq.top()){
                    sq.pop();
                }
                else{
                    if (sq.empty() || sq.top() < 0){
                        sq.push(asteroids[i]);
                    }
                }
            }
        }
        vector<int> res(sq.size());
        for (int i = (int)sq.size()-1; i>=0; i--){
            res[i] = sq.top();
            sq.pop();
        }
        return res;
    }
};