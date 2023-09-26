class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sLen = s.length();
        int tLen = t.length();
        int sInd = 0;
        int tInd = 0;
        while (sInd < sLen && tInd < tLen) {
            if (s[sInd] == t[tInd]) {
                sInd++;
            }
            tInd++;
        }
        return sInd == sLen;
    }
};