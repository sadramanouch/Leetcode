class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int sz = nums.size();
        std::vector<int> ans;

        for (int i = 0; i < sz; i++) {
            int num = std::abs(nums[i]);

            if (nums[num - 1] > 0) {
                nums[num - 1] = -nums[num - 1];
            }
        }

        for (int i = 0; i < sz; i++) {
            if (nums[i] > 0) {
                ans.push_back(i + 1);
            }
        }

        return ans;
    }
};