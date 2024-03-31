class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int res = 0;
        for (int len = 1; len <= n; len += 2) {
            for (int start = 0; start <= n - len; start++) {
                for (int i = start; i < start + len; i++) {
                    res += arr[i];
                }
            }
        }
        return res;
    }
};
