class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        // double sum = 0;
        // double val = k;
        // int n = nums.size();
        // for (int i = 0; i<n; i++){
        //     for (int j = i; j<n; j++){
        //         sum += nums[i];
        //         double g = sum/val;
        //         if (g == static_cast<int>(g)){
        //             return true;
        //         }
        //     }
        //     sum = 0;
        // }
        // return false;
        int n = nums.size();
        if (n < 2) return false;

        unordered_map<int, int> remainderMap;
        remainderMap[0] = -1;  // Handle subarrays that start from index 0

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            int remainder = (k == 0) ? sum : sum % k;

            if (remainderMap.find(remainder) != remainderMap.end()) {
                int prevIndex = remainderMap[remainder];
                if (i - prevIndex > 1)  // Check subarray length
                    return true;
            } else {
                remainderMap[remainder] = i;
            }
        }

        return false;
    }
};