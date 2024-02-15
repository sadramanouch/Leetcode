#include <vector>
#include <unordered_map>
#include <string>

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<string, bool> hash;

        vector<string> morseCodes = {
            ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
            "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
            "..-", "...-", ".--", "-..-", "-.--", "--.."
        };

        for (int i = 0; i < words.size(); i++) {
            string res = "";
            for (int j = 0; j < words[i].size(); j++) {
                if (words[i][j] >= 'a' && words[i][j] <= 'z') {
                    res += morseCodes[words[i][j] - 'a'];
                }
            }
            hash[res] = true;
        }

        return hash.size();
    }
};
