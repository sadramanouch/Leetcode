class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        std::vector<double> ans(2, 0);
        ans[0] = celsius + 273.15;
        ans[1] = (celsius * 1.8) + 32;
        return ans;
    }
};