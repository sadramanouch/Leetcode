class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> occur;
        unordered_set<int> counts;
        for (int num : arr) {
            occur[num]++;
        }
        for (const auto& entry : occur) {
            int count = entry.second;
            if (counts.find(count) != counts.end()) {
                return false;  
            }
            counts.insert(count);
        }
        return true;
    }
};