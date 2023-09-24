class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        if (n < 2){
            return false;
        } 
        unordered_map<int, int> remainderMap;
        remainderMap[0] = -1; 
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            int remainder = (k == 0) ? sum : sum % k;
            if (remainderMap.find(remainder) != remainderMap.end()) {
                int prevIndex = remainderMap[remainder];
                if (i - prevIndex > 1)  
                    return true;
            } else {
                remainderMap[remainder] = i;
            }
        }
        return false;
    }
};