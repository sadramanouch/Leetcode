class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> permutation;
        vector<bool> used(nums.size(), false);
        backtrack(nums, used, permutation, result);
        return result;
    }
    
    void backtrack(const vector<int>& nums, vector<bool>& used, vector<int>& permutation, vector<vector<int>>& result) {
        if (permutation.size() == nums.size()) {
            result.push_back(permutation);
            return;
        }
        
        for (int i = 0; i < nums.size(); ++i) {
            if (!used[i]) {
                used[i] = true;
                permutation.push_back(nums[i]);
                backtrack(nums, used, permutation, result);
                permutation.pop_back();
                used[i] = false;
            }
        }
    }
};