class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> result;
        stack<int> q;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            while (nums[i]) {
                int tmp = nums[i] % 10;
                nums[i] /= 10;
                q.push(tmp);
            }
            while (!q.empty()) {
                int t = q.top();
                q.pop();
                result.push_back(t);
            }
        }
        return result;
    }
};