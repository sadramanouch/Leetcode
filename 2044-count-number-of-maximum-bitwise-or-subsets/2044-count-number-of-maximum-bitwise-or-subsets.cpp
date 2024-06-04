class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size();
        int maxOr = 0;
        for (int num : nums) {
            maxOr |= num;
        }

        int count = 0;
        int totalSubsets = 1 << n; // 2^n subsets
        for (int subset = 1; subset < totalSubsets; ++subset) {
            int currentOr = 0;
            for (int i = 0; i < n; ++i) {
                if (subset & (1 << i)) { // If the i-th element is in the current subset
                    currentOr |= nums[i];
                }
            }
            if (currentOr == maxOr) {
                ++count;
            }
        }

        return count;
    }
};