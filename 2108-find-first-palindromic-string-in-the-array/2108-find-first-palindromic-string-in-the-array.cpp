class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string res = "";
        int n = words.size();
        for (int i = 0; i < n; i++) {
            bool isPalindrome = true;
            int len = words[i].size();
            for (int j = 0; j < len / 2; j++) {
                if (words[i][j] != words[i][len - j - 1]) {
                    isPalindrome = false;
                    break;
                }
            }
            if (isPalindrome) {
                res = words[i];
                break;
            }
        }
        return res;
    }
};
