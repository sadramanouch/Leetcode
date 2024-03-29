#include <bitset>

class Solution {
public:
    int minBitFlips(int start, int goal) {
        string startBinary = bitset<sizeof(int) * 8>(start).to_string();
        string goalBinary = bitset<sizeof(int) * 8>(goal).to_string();
        int count = 0;
        int x = start ^ goal;
        while (x) {
            count += x & 1;
            x >>= 1;
        }
        return count;
    }
};
