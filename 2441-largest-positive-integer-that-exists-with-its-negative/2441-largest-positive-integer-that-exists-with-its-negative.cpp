class Solution {
public:
    int findMaxK(vector<int>& nums) {
        set<int> numSet(nums.begin(), nums.end());
        int res = -1; 

        for (int num : nums) {
            if (num > 0 && numSet.find(-num) != numSet.end()) {
                res = max(res, num); 
            }
        }

        return res;
    }
};