#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n = nums.size();
        unordered_set<int> seen(nums.begin(), nums.end()); 
        int count = 0;
        for (int i = 0; i < n - 2; ++i) {
            int second = nums[i] + diff;
            int third = nums[i] + 2 * diff;
            if (seen.count(second) && seen.count(third)) {
                ++count;
            }
        }

        return count;
    }
};
