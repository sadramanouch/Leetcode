class Solution {
public:
    int totalMoney(int n) {
        int res = 0;
        for (int i = 0; i<n; i++){
            int week = i / 7;
            int day = i % 7;
            res += (week+1) + day;
        }
        return res;
    }
};