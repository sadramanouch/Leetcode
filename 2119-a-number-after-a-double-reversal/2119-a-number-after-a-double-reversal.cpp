class Solution {
public:
    bool isSameAfterReversals(int num) {
        int originalNum = num;
        int reversedNum = reverseNumber(num);
        int reversedReversedNum = reverseNumber(reversedNum);
        return originalNum == reversedReversedNum;
    }

private:
    int reverseNumber(int num) {
        int reversed = 0;
        while (num > 0) {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }
        return reversed;
    }
};