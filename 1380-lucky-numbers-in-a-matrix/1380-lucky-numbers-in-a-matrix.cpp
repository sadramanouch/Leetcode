class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> minRow;   
        vector<int> maxCol(matrix[0].size(), INT_MIN);  

        int m = matrix.size();
        int n = matrix[0].size();
        for (int i = 0; i < m; ++i) {
            int minElement = INT_MAX;
            for (int j = 0; j < n; ++j) {
                minElement = min(minElement, matrix[i][j]);
            }
            minRow.push_back(minElement);
        }
        for (int j = 0; j < n; ++j) {
            for (int i = 0; i < m; ++i) {
                maxCol[j] = max(maxCol[j], matrix[i][j]);
            }
        }
        vector<int> res;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] == minRow[i] && matrix[i][j] == maxCol[j]) {
                    res.push_back(matrix[i][j]);
                }
            }
        }

        return res;
    }
};