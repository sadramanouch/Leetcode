class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> res(n, 0);
        for (int i = 0; i<n; i++){
            res[i] = start + 2*i;
        }
        int ans = 0;
        for (int num : res) {
            ans ^= num;
        }
        return ans;
    }
};