class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end(), greater<int>());
        int n = piles.size();
        int j = n / 3;
        int res = 0;
        int k = 0;
        while (j){
            res += piles[k+1];
            k += 2;
            j--;
        }
        return res;
    }
};