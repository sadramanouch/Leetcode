class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<std::pair<int, string>> people;
        for (size_t i = 0; i < names.size(); i++) {
            people.emplace_back(heights[i], names[i]);
        }
        sort(people.begin(), people.end(), [](const auto& a, const auto& b) {
            return a.first > b.first;
        });
        vector<string> res;
        for (const auto& p : people) {
            res.push_back(p.second); 
        }
        return res;
    }
};