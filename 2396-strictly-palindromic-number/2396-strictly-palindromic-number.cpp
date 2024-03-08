#include <string>
#include <vector>

class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        std::string nStr = std::to_string(n);
        
        for (int base = 2; base <= n - 2; ++base) {
            if (!isPalindromeInBase(n, base)) {
                return false;
            }
        }

        return true;
    }

private:
    bool isPalindromeInBase(int num, int base) {
        std::vector<int> digits;
        
        while (num > 0) {
            digits.push_back(num % base);
            num /= base;
        }

        for (int i = 0, j = digits.size() - 1; i < j; ++i, --j) {
            if (digits[i] != digits[j]) {
                return false;
            }
        }

        return true;
    }
};
