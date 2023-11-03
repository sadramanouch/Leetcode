class Solution {
public:
    string decodeString(string s) {
        int n = s.length();
        int i = 0; 
        string res = "";
        stack<int> countStack; 
        stack<string> strStack; 
        while (i < n) {
            if (isdigit(s[i])) {
                int count = 0;
                while (isdigit(s[i])) {
                    count = count * 10 + (s[i] - '0');
                    i++;
                }
                countStack.push(count);
            } else if (s[i] == '[') {
                strStack.push(res);
                res = ""; 
                i++;
            } else if (s[i] == ']') {
                int repeatCount = countStack.top();
                countStack.pop();
                string temp = res;
                for (int j = 1; j < repeatCount; j++) {
                    res += temp; 
                }
                res = strStack.top() + res;
                strStack.pop();
                i++;
            } else {
                res += s[i];
                i++;
            }
        }
        return res;
    }
};