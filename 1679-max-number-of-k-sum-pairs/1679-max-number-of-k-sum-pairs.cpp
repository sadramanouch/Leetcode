class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int ans = 0;
        unordered_map<int, int> numCount; 
        for (int num : nums) {
            int complement = k - num;
            if (numCount[complement] > 0) {
                ans++;
                numCount[complement]--;
            } else {
                numCount[num]++;
            }
        }
        return ans;
    }
};