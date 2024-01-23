#include <stack>
#include <string>

class Solution {
public:
    string reverseWords(string s) {
        stack<char> tmp;
        string result = "";
        
        for(int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                result += ' ';
                while (!tmp.empty()) {
                    tmp.pop();
                }
            } else {
                while (i < s.size() && s[i] != ' ') {
                    tmp.push(s[i]);
                    i++;  // Increment i to move to the next character
                }
                while (!tmp.empty()) {
                    char res = tmp.top();  // Use top() to get the top element
                    tmp.pop();
                    result += res;
                }
                i--;  // Decrement i to correct the index after the loop
            }
        }
        
        return result;
    }
};

