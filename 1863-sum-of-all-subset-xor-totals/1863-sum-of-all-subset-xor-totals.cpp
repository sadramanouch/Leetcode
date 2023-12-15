class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        for (int mask = 0; mask < (1 << n); ++mask) {
            int xorTotal = 0;
            for (int i = 0; i < n; ++i) {
                if ((mask & (1 << i)) != 0) {
                    xorTotal ^= nums[i];
                }
            }
            result += xorTotal;
        }
        return result;
    }
};