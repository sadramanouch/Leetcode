class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> result;
        auto matchesPattern = [](const string& word, const string& pattern) {
            if (word.length() != pattern.length()){
                return false;
            }
            unordered_map<char, char> w2p, p2w;
            for (int i = 0; i < word.length(); ++i) {
                char w = word[i], p = pattern[i];
                if (w2p.count(w) && w2p[w] != p){
                    return false;
                }
                if (p2w.count(p) && p2w[p] != w){
                    return false;
                }
                w2p[w] = p;
                p2w[p] = w;
            }
            return true;
        };
        
        for (const string& word : words) {
            if (matchesPattern(word, pattern)) {
                result.push_back(word);
            }
        }
        
        return result;
    }
};