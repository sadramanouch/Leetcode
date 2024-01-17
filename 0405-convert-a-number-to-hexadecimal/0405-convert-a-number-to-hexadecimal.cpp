class Solution {
public:
    string toHex(int num) {
        if (num == 0) {
            return "0";
        }

        string res = "";
        uint32_t unsignedNum = num; 
        while (unsignedNum != 0) {
            int tmp = unsignedNum % 16;
            if (tmp >= 10) {
                res = char('a' + tmp - 10) + res;
            } else {
                res = char('0' + tmp) + res;
            }
            unsignedNum /= 16;
        }
        return res;
    }
};