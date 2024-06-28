class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int, int> hash;
        int n = highLimit - lowLimit+1;
        for (int i = 0; i<n; i++){
            int tmp = lowLimit + i;
            int sum = 0;
            while (tmp > 0) {
                sum += tmp % 10;  
                tmp /= 10;        
            }
            hash[sum]++;
        }
        int maxFrequency = 0;
        for (const auto& pair : hash) {
            if (pair.second > maxFrequency) {
                maxFrequency = pair.second;
            }
        }
        
        return maxFrequency;
    }
};