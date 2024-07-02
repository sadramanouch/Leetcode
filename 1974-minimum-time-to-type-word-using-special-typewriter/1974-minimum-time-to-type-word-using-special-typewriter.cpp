class Solution {
public:
    int minTimeToType(string word) {
        int n = word.size();
        int res = n;  
        char current = 'a';  

        for (int i = 0; i < n; i++) {
            int clockwiseDist = abs(word[i] - current);
            int counterClockwiseDist = 26 - clockwiseDist;
            res += min(clockwiseDist, counterClockwiseDist);
            current = word[i];  
        }

        return res;
    }
};