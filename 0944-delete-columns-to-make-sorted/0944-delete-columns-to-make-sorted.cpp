class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int numRows = strs.size();
        int numCols = strs[0].size();
        int count = 0;
        for (int col = 0; col < numCols; ++col) {
            for (int row = 1; row < numRows; ++row) {
                if (strs[row][col] < strs[row - 1][col]) {
                    count++;
                    break;
                }
            }
        }

        return count;
    }
};