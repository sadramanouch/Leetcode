class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        string result = "";
        
        int i = num1.size() - 1;
        int j = num2.size() - 1;

        while (i >= 0 || j >= 0 || carry) {
            int x = (i >= 0) ? num1[i--] - '0' : 0;
            int y = (j >= 0) ? num2[j--] - '0' : 0;

            int sum = x + y + carry;
            carry = sum / 10;

            result = to_string(sum % 10) + result;
        }

        return result;
    }
};