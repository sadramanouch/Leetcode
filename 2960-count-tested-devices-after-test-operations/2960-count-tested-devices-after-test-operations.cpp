class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int res = 0;
        int n = batteryPercentages.size();
        for (int i = 0; i<n; i++){
            if (batteryPercentages[i] > 0){
                res++;
                for (int j = i+1; j<n; j++){
                    batteryPercentages[j]--;
                }
            }
        }
        return res;
    }
};