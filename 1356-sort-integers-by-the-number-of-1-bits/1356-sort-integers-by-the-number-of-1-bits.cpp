class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        auto countBits = [](int n) {
            int count = 0;
            while (n > 0) {
                count += n & 1;
                n >>= 1;
            }
            return count;
        };
        unordered_map<int, int> bitCount;
        for (int num : arr) {
            bitCount[num] = countBits(num);
        }
        sort(arr.begin(), arr.end(), [&bitCount](int a, int b) {
            if (bitCount[a] == bitCount[b]) {
                return a < b;  // If the number of 1-bits is the same, sort by the number itself
            }
            return bitCount[a] < bitCount[b];  // Otherwise, sort by the number of 1-bits
        });

        return arr;
    }
};