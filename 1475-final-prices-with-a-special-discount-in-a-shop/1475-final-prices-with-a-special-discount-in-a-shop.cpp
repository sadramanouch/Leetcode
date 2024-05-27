class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        for (int i = 0; i<n; i++){
            for (int j = i+1; j<n; j++){
                if (prices[j] <= prices[i]){
                    prices[i] -= prices[j];
                    j = n;
                }
            }
        }
        return prices;
    }
};