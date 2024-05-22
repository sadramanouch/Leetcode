class Solution {
public:
    string removeTrailingZeros(string num) {
        int i = 0;
        while (i < num.size() && num[i] == '0') {
            i++;
        }
        num = num.substr(i);
        i = num.size() - 1;
        while (i >= 0 && num[i] == '0') {
            i--;
        }
        num = num.substr(0, i + 1);
        if (num.empty()) {
            return "0";
        }
        return num;
    }
};