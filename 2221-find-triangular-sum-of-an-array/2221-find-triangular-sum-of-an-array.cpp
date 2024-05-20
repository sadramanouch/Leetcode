class Solution {
public:
    int triangularSum(vector<int>& nums) {
        while (nums.size() > 1) {
            vector<int> arr(nums.size() - 1);
            for (int i = 0; i < nums.size() - 1; i++) {
                arr[i] = (nums[i] + nums[i+1]) % 10;
            }
            nums = arr; // Update nums to the newly computed arr for the next iteration
        }
        return nums[0];
    }
};