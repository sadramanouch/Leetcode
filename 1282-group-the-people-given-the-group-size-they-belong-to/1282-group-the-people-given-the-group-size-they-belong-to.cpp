#include <vector>
#include <unordered_map>

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>> groups; // Map to store groups based on size
        vector<vector<int>> result; // Result vector to store the final groups

        for (int i = 0; i < groupSizes.size(); ++i) {
            int size = groupSizes[i];
            groups[size].push_back(i); // Add person i to the group of size 'size'

            if (groups[size].size() == size) {
                result.push_back(groups[size]); // If the group is complete, add it to the result
                groups[size].clear(); // Clear the group for the next set of people
            }
        }

        return result;
    }
};
