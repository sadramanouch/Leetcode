class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        if(numRows <= 0){
            return triangle;
        } 
        triangle.push_back(vector<int>{1});
        for (int i = 1; i<numRows; i++){
            vector<int> rows;
            rows.push_back(1);
            for (int j = 1; j<i; j++){
                int nums = triangle[i-1][j-1] + triangle[i-1][j];
                rows.push_back(nums);
            }
            rows.push_back(1);
            triangle.push_back(rows);
        }
        return triangle;
    }
};