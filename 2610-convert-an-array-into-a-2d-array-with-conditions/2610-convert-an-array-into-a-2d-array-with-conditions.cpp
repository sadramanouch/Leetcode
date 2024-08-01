class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> freq; // Stores frequency of each number
        for (int num : nums) {
            freq[num]++;
        }
        
        // Create a vector of pairs for sorting by frequency
        std::vector<std::pair<int, int>> elements(freq.begin(), freq.end());
        sort(elements.begin(), elements.end(), [&](const std::pair<int, int>& a, const std::pair<int, int>& b) {
            return a.second > b.second;
        });

        std::vector<std::vector<int>> result;
        std::unordered_map<int, std::set<int>> usedRows; // Tracks rows where each number is used

        for (auto& elem : elements) {
            int count = elem.second;
            std::vector<int> availableRows;
            
            // Find available rows for placement
            for (int i = 0; i < result.size() && count > 0; ++i) {
                if (usedRows[elem.first].find(i) == usedRows[elem.first].end()) {
                    availableRows.push_back(i);
                    result[i].push_back(elem.first);
                    usedRows[elem.first].insert(i);
                    count--;
                }
            }
            
            // If we still have counts left, need new rows
            while (count > 0) {
                std::vector<int> newRow{elem.first};
                result.push_back(newRow);
                int newRowIdx = result.size() - 1;
                usedRows[elem.first].insert(newRowIdx);
                count--;
            }
        }

        return result;
    }
};