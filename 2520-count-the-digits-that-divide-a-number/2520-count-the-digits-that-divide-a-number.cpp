class Solution {
public:
    int countDigits(int num) {
        int n = num;
        int count = 0;
        int res = 0;
        while (num != 0){
            res = num%10;
            num = num / 10;
            if (n % res == 0){
                count++;
            }
        }
        return count;
    }
};