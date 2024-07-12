class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        int n = satisfaction.size();
        int res = 0;
        int kk = 1;
        int tmp = 0;
        for (int i = 0; i<n; i++){
            for (int j = i; j<n; j++){
                tmp += (kk * satisfaction[j]);
                kk++;
            }
            res = max(tmp, res);
            kk = 1;
            tmp = 0;
        }
        return res;
    }
};