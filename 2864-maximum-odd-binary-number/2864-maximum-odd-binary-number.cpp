#include <string>
using namespace std;

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string res = "";
        int n = s.size();
        int one = 0, zero = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                one++;
            }
            else{
                zero++;
            }
        }
        while(one > 1) {
            res.push_back('1');
            one--;
        }
        while (zero) {
            res.push_back('0');
            zero--;
        }
        res.push_back('1');
        return res;
    }
};
