#include <stack>
#include <string>

class Solution {
public:
    string reverseWords(string s) {
        stack<char> tmp;
        string result = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                result += ' ';
                while (!tmp.empty()) {
                    tmp.pop();
                }
            } else {
                while (i < s.size() && s[i] != ' ') {
                    tmp.push(s[i]);
                    i++;
                }
                while (!tmp.empty()) {
                    char res = tmp.top();
                    tmp.pop();
                    result += res;
                }
                i--;
            }
        }
        return result;
    }
};
