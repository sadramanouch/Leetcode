class Solution {
public:
//     void possible(int m, int n, int i, int j, int &count){
//         if (i == m-1 && j == n-1){
//             count++;
//             return;
//         }
//         if (i < m-1){
//             possible(m, n, i+1, j, count);
//         }
//         if (j < n-1){
//             possible(m, n, i, j+1, count);
//         }
//     }
    
//     int uniquePaths(int m, int n) {
//         int count = 0;
//         int i = 0;
//         int j = 0;
//         possible(m, n, i, j, count);
//         return count;
//     }
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, 0));
        for (int i = 0; i < m; ++i) {
            dp[i][0] = 1;
        }
        for (int j = 0; j < n; ++j) {
            dp[0][j] = 1;
        }
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        return dp[m - 1][n - 1];
    }
};