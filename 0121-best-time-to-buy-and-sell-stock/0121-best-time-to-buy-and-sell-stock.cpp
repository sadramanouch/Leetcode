class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sz = prices.size();
        int minpr = prices[0];
        int maxprofit = 0;
        for (int i = 1; i<sz; i++){
            maxprofit = max(maxprofit, prices[i] - minpr);
            minpr = min(minpr, prices[i]);
        }
        return maxprofit;
    }
};

