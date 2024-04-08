#include <string>

using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        int open = 0;
        string res = "";
        string tmp = "";
        for (char c : s) {
            if (c == '(') {
                if (open > 0) {
                    tmp.push_back(c);
                }
                open++;
            } else if (c == ')') {
                open--;
                if (open > 0) {
                    tmp.push_back(c);
                } else {
                    res += tmp;
                    tmp = "";
                }
            }
        }
        return res;
    }
};
