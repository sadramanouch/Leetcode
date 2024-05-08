class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int currentXOR = 0;
        for (int num : nums) {
            currentXOR ^= num;
        }
        int requiredXOR = currentXOR ^ k;
        int minOperations = 0;
        while (requiredXOR > 0) {
            minOperations += (requiredXOR & 1); // Add 1 if the least significant bit is set
            requiredXOR >>= 1; // Shift right to check the next bit
        }

        return minOperations;
    }
};