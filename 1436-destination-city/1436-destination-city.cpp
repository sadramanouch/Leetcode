class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> startingCities;
        for (const auto& path : paths) {
            startingCities.insert(path[0]);
        }
        string res = "";
        for (const auto& path : paths) {
            if (startingCities.find(path[1]) == startingCities.end()) {
                res = path[1];
                break;
            }
        }
        return res;
    }
};