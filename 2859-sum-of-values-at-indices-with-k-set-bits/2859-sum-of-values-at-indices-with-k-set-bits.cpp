class Solution {
public:
    int countSetBits(int num) {
        int count = 0;
        while (num > 0) {
            count += num & 1;
            num >>= 1;
        }
        return count;
    }

    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            int setBitsCount = countSetBits(i);
            if (setBitsCount == k) {
                sum += nums[i];
            }
        }
        return sum;
    }
};
