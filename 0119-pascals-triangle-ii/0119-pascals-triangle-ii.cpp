class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if (rowIndex < 0) {
            return {};
        }
        vector<int> row = {1};
        for (int i = 1; i <= rowIndex; ++i) {
            vector<int> newRow = {1}; 
            for (int j = 1; j < i; ++j) {
                newRow.push_back(row[j - 1] + row[j]);  
            }
            newRow.push_back(1);  
            row = newRow;  
        }
        return row;
    }
};