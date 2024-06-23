class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int tmp = n * n;
        vector<int> nums;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                nums.push_back(grid[i][j]);
            }
        }

        vector<int> res;
        unordered_set<int> seen;
        int repeated = -1;
        for (int num : nums) {
            if (seen.count(num)) {
                repeated = num;
                break;
            }
            seen.insert(num);
        }
        int expectedSum = tmp * (tmp + 1) / 2; // Sum of first n*n natural numbers
        int actualSum = 0;
        for (int num : nums) {
            actualSum += num;
        }
        int missing = expectedSum - (actualSum - repeated);

        res.push_back(repeated);
        res.push_back(missing);

        return res;
    }
};