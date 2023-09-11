class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sz = prices.size();
        int minpr = prices[0];
        int maxpr = 0;

        for(int i=1;i<sz;i++){
            maxpr = max(maxpr,prices[i]-minpr);
            minpr = min(prices[i],minpr);
        }

        return maxpr;
    }
};

