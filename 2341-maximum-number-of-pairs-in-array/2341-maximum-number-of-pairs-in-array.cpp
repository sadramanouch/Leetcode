class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int n = nums.size();
        int pairs = 0;
        vector<int> res(2, 0);  

        if (n == 1) {
            res[0] = 0;
            res[1] = 1;
            return res;
        }

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                pairs++;
                nums[i] = nums[i + 1] = -1;  
                i++;  
            }
        }

        int left = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != -1) {
                left++;
            }
        }

        res[0] = pairs;
        res[1] = left;

        return res;
    }
};