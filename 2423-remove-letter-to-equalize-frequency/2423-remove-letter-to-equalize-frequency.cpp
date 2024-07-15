class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char, int> freqMap;
        int n = word.size();
        for (char ch : word) {
            freqMap[ch]++;
        }
        unordered_map<int, int> countMap;
        for (auto& entry : freqMap) {
            countMap[entry.second]++;
        }
        if (countMap.size() == 1) {
            if (countMap.begin()->first == 1 || countMap.begin()->second == 1) {
                return true;
            }
        }
        if (countMap.size() == 2) {
            auto it = countMap.begin();
            int freq1 = it->first, count1 = it->second;
            ++it;
            int freq2 = it->first, count2 = it->second;
            if ((freq1 == 1 && count1 == 1) || (freq2 == 1 && count2 == 1)) {
                return true;
            }
            if ((freq1 - 1 == freq2 && count1 == 1) || (freq2 - 1 == freq1 && count2 == 1)) {
                return true;
            }
        }

        return false;
    }
};