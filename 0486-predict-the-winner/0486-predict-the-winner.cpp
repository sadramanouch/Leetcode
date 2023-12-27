class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        
        // Create a 2D vector to store the scores
        vector<vector<int>> dp(n, vector<int>(n, 0));

        // Fill in the scores for the base case (single elements)
        for (int i = 0; i < n; ++i) {
            dp[i][i] = nums[i];
        }

        // Fill in the scores for the remaining cases
        for (int len = 2; len <= n; ++len) {
            for (int i = 0; i + len - 1 < n; ++i) {
                int j = i + len - 1;
                dp[i][j] = max(nums[i] - dp[i + 1][j], nums[j] - dp[i][j - 1]);
            }
        }

        // If the score for Player 1 is greater than or equal to 0, they can win
        return dp[0][n - 1] >= 0;
    }
};