class Solution {
public:
    string sortString(string s) {
        int n = s.size();
        string res = "";
        sort(s.begin(), s.end());
        unordered_map<char, int> hash;
        for (auto &ch : s) {
            hash[ch]++;
        }
        bool forward = true; 
        while (n > 0) {
            if (forward) {
                for (char ch = 'a'; ch <= 'z'; ++ch) {
                    if (hash[ch] > 0) {
                        res += ch;
                        hash[ch]--;
                        n--;
                    }
                }
            } 
            else {
                for (char ch = 'z'; ch >= 'a'; --ch) {
                    if (hash[ch] > 0) {
                        res += ch;
                        hash[ch]--;
                        n--;
                    }
                }
            }
            forward = !forward;  
        }
        return res;
    }
};
