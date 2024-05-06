class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> distinctNumbers; 
        for (int num : nums) {
            distinctNumbers.insert(num); 
            int reversed = 0;
            int original = num;
            while (num != 0) {
                int digit = num % 10;
                num /= 10;
                if (reversed > (std::numeric_limits<int>::max() - digit) / 10) {
                    return 0; 
                }
                reversed = reversed * 10 + digit;
            }
            distinctNumbers.insert(reversed); 
        }
        return distinctNumbers.size();
    }
};