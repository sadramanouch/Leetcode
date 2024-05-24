class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> res(n);
        for (int i =1; i<=n; i++){
            res[i-1] = i;
        }
        int idx = 0; 
        while (n > 1) {
            idx = (idx + k - 1) % n;
            res.erase(res.begin() + idx);
            n--;
        }
        return res[0];
    }
};