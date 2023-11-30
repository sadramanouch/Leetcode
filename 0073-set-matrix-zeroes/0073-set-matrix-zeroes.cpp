class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        bool firstRowZero = false;
        bool firstColZero = false;
        for (int col = 0; col < cols; ++col) {
            if (matrix[0][col] == 0) {
                firstRowZero = true;
                break;
            }
        }
        for (int row = 0; row < rows; ++row) {
            if (matrix[row][0] == 0) {
                firstColZero = true;
                break;
            }
        }
        for (int row = 1; row < rows; ++row) {
            for (int col = 1; col < cols; ++col) {
                if (matrix[row][col] == 0) {
                    matrix[row][0] = 0;
                    matrix[0][col] = 0;
                }
            }
        }
        for (int row = 1; row < rows; ++row) {
            if (matrix[row][0] == 0) {
                for (int col = 1; col < cols; ++col) {
                    matrix[row][col] = 0;
                }
            }
        }
        for (int col = 1; col < cols; ++col) {
            if (matrix[0][col] == 0) {
                for (int row = 1; row < rows; ++row) {
                    matrix[row][col] = 0;
                }
            }
        }
        if (firstRowZero) {
            for (int col = 0; col < cols; ++col) {
                matrix[0][col] = 0;
            }
        }
        if (firstColZero) {
            for (int row = 0; row < rows; ++row) {
                matrix[row][0] = 0;
            }
        }
    }
};