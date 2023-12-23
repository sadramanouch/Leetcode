class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char> resultStack;
        unordered_set<char> includedChars;
        unordered_map<char, int> lastIdxMap;
        for (int i = 0; i < s.length(); ++i) {
            lastIdxMap[s[i]] = i;
        }
        for (int i = 0; i < s.length(); ++i) {
            char currentChar = s[i];
            if (includedChars.find(currentChar) != includedChars.end()) {
                continue;
            }
            while (!resultStack.empty() && currentChar < resultStack.top() && i < lastIdxMap[resultStack.top()]) {
                includedChars.erase(resultStack.top());
                resultStack.pop();
            }
            resultStack.push(currentChar);
            includedChars.insert(currentChar);
        }
        string result = "";
        while (!resultStack.empty()) {
            result = resultStack.top() + result;
            resultStack.pop();
        }

        return result;
        
    }
};