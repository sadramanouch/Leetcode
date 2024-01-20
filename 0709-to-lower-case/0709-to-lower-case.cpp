class Solution {
public:
    string toLowerCase(string s) {
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
        return s;
    }
};