class Solution {
public:
    string removeDuplicateLetters(string s) {
        std::stack<char> resultStack;
        std::unordered_set<char> includedChars;

        // Store the last index of each character in the string
        std::unordered_map<char, int> lastIdxMap;
        for (int i = 0; i < s.length(); ++i) {
            lastIdxMap[s[i]] = i;
        }

        for (int i = 0; i < s.length(); ++i) {
            char currentChar = s[i];

            // Skip if the character is already in the result
            if (includedChars.find(currentChar) != includedChars.end()) {
                continue;
            }

            // Pop characters from the stack if they are greater than the current character
            while (!resultStack.empty() && currentChar < resultStack.top() && i < lastIdxMap[resultStack.top()]) {
                includedChars.erase(resultStack.top());
                resultStack.pop();
            }

            // Add the current character to the stack and set
            resultStack.push(currentChar);
            includedChars.insert(currentChar);
        }

        // Build the result string from the stack
        std::string result = "";
        while (!resultStack.empty()) {
            result = resultStack.top() + result;
            resultStack.pop();
        }

        return result;
        
    }
};