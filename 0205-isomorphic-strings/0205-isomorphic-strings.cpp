class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, char> sToTMap;
        unordered_map<char, char> tToSMap;

        for (int i = 0; i < s.length(); ++i) {
            char sChar = s[i];
            char tChar = t[i];
            if (sToTMap.find(sChar) != sToTMap.end() && sToTMap[sChar] != tChar) {
                return false;
            }
            if (tToSMap.find(tChar) != tToSMap.end() && tToSMap[tChar] != sChar) {
                return false;
            }
            sToTMap[sChar] = tChar;
            tToSMap[tChar] = sChar;
        }
        return true;
    }
};