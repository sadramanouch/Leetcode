class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        int commonCount1 = 0;
        int commonCount2 = 0;

        for (const auto& num : nums1) {
            if (set2.count(num) > 0) {
                commonCount1++;
            }
        }

        for (const auto& num : nums2) {
            if (set1.count(num) > 0) {
                commonCount2++;
            }
        }

        return {commonCount1, commonCount2};
    }
};