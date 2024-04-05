#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        
        // Iterate over all possible subarrays
        for (int i = 0; i < n; ++i) {
            unordered_set<int> distinct;
            
            // Calculate distinct count for each subarray
            for (int j = i; j < n; ++j) {
                distinct.insert(nums[j]);
                sum += distinct.size() * distinct.size();
            }
        }
        
        return sum;
    }
};
