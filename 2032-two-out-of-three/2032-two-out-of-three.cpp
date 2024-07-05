class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int, int> hash;
        vector<int> res;
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        unordered_set<int> set3(nums3.begin(), nums3.end());
        for (auto &num : set1) hash[num]++;
        for (auto &num : set2) hash[num]++;
        for (auto &num : set3) hash[num]++;
        for (auto &entry : hash) {
            if (entry.second > 1) {
                res.push_back(entry.first);
            }
        }

        return res;
    }
};