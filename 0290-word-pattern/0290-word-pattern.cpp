class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> CtoW;
        unordered_map<string, char> WtoC;
        istringstream iss(s);
        string word;
        for (auto c : pattern){
            if (!(iss >> word)){
                return false;
            }
            if (CtoW.find(c) == CtoW.end() && WtoC.find(word) == WtoC.end()){
                CtoW[c] = word;
                WtoC[word] = c;
            }
            if (CtoW[c] != word || WtoC[word] != c){
                return false;
            }
        }
        return (!(iss >> word));
    }
};