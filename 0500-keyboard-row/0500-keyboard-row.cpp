class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> result;
        unordered_set<char> row1{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
        unordered_set<char> row2{'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
        unordered_set<char> row3{'z', 'x', 'c', 'v', 'b', 'n', 'm'};

        for (const string& word : words) {
            if (isSingleRow(word, row1) || isSingleRow(word, row2) || isSingleRow(word, row3)) {
                result.push_back(word);
            }
        }

        return result;
    }

private:
    bool isSingleRow(const string& word, const unordered_set<char>& row) {
        for (char ch : word) {
            if (row.find(tolower(ch)) == row.end()) {
                return false;
            }
        }
        return true;
    }
};