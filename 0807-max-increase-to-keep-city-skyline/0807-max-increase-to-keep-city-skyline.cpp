#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> maxRow(n, 0);
        vector<int> maxCol(n, 0);
        
        // Calculate the maximum height in each row and column
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                maxRow[i] = max(maxRow[i], grid[i][j]);
                maxCol[j] = max(maxCol[j], grid[i][j]);
            }
        }
        
        int maxIncrease = 0;
        // Calculate the maximum possible increase in height
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                maxIncrease += min(maxRow[i], maxCol[j]) - grid[i][j];
            }
        }
        
        return maxIncrease;
    }
};
