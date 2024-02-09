class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int goodPairs = 0;
        unordered_map<int, int> frequency;

        for (int num : nums) {
            frequency[num]++;
        }

        for (auto& entry : frequency) {
            int count = entry.second;
            if (count > 1) {
                goodPairs += (count * (count - 1)) / 2;
            }
        }

        return goodPairs;
    }
};