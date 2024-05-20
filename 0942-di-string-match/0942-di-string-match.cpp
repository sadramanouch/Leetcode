class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        vector<int> res(n + 1);
        int low = 0, high = n;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'I') {
                res[i] = low++;
            } 
            else {
                res[i] = high--;
            }
        }
        res[n] = low; // low and high should be equal here, can use either

        return res;
    }
};