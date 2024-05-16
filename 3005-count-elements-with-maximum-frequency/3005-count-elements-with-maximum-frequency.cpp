class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        int maxFreq = 0;
        for (auto [num, f] : freq) {
            maxFreq = max(maxFreq, f);
        }
        int totalMaxFreq = 0;
        for (auto [num, f] : freq) {
            if (f == maxFreq) {
                totalMaxFreq += f;
            }
        }
        return totalMaxFreq;
    }
};