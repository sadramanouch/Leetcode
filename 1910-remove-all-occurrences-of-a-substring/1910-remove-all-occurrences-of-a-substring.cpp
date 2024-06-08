class Solution {
public:
    string removeOccurrences(string &s, string part) {
        size_t partLength = part.length();
        size_t pos = s.find(part);
        
        while (pos != string::npos) {
            s.erase(pos, partLength);
            pos = s.find(part);
        }
        
        return s;
    }
};