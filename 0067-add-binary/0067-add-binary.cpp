class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int carry = 0;
        int n = max(a.size(), b.size());
        a = string(n - a.size(), '0') + a;
        b = string(n - b.size(), '0') + b;
        for (int i = n - 1; i >= 0; --i) {
            int sum = (a[i] - '0') + (b[i] - '0') + carry;
            result.push_back((sum % 2) + '0');
            carry = sum / 2;
        }
        if (carry > 0) {
            result.push_back(carry + '0');
        }
        reverse(result.begin(), result.end());
        return result;
    }
};