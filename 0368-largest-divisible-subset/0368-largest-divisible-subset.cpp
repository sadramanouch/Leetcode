class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        if(nums.empty()) {
            return {};
        }
        
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        vector<int> dp(n, 1), parent(n, -1);
        
        int maxLen = 1, endIdx = 0;
        
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] % nums[j] == 0 && dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                    parent[i] = j;
                    
                    if (dp[i] > maxLen) {
                        maxLen = dp[i];
                        endIdx = i;
                    }
                }
            }
        }
        
        vector<int> result;
        while (endIdx != -1) {
            result.push_back(nums[endIdx]);
            endIdx = parent[endIdx];
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};