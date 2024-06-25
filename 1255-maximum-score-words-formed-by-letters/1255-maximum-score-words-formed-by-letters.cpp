class Solution {
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        unordered_map<char, int> letterCount;
        for (char letter : letters) {
            letterCount[letter]++;
        }
        auto wordScore = [&score](const string& word) {
            int totalScore = 0;
            for (char c : word) {
                totalScore += score[c - 'a'];
            }
            return totalScore;
        };
        
        function<int(int)> backtrack = [&](int index) {
            if (index == words.size()) return 0;
            int maxScore = backtrack(index + 1);
            bool canUse = true;
            unordered_map<char, int> tempCount = letterCount;
            for (char c : words[index]) {
                if (--tempCount[c] < 0) {
                    canUse = false;
                    break;
                }
            }
            if (canUse) {
                letterCount = tempCount;
                maxScore = max(maxScore, wordScore(words[index]) + backtrack(index + 1));
                letterCount = tempCount;
                for (char c : words[index]) {
                    letterCount[c]++;
                }
            }

            return maxScore;
        };

        return backtrack(0);
    }
};