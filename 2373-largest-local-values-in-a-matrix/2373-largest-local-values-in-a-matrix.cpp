class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> res;
        int n = grid.size();
        for (int i = 0; i < n - 2; ++i) {
            vector<int> tmp;
            for (int j = 0; j < n - 2; ++j) {
                int maxVal = INT_MIN;
                for (int x = i; x < i + 3; ++x) {
                    for (int y = j; y < j + 3; ++y) {
                        maxVal = max(maxVal, grid[x][y]);
                    }
                }
                tmp.push_back(maxVal);
            }
            res.push_back(tmp);
        }
        return res;
    }
};