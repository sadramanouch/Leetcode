class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        if (n == 0) {
            return 0;
        }

        int total = 0;

        for (int i = 1; i < n; ++i) {
            int timeGap = timeSeries[i] - timeSeries[i - 1];
            total += min(duration, timeGap);
        }

        total += duration;

        return total;
    }
};