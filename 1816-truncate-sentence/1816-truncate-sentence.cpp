class Solution {
public:
    string truncateSentence(string s, int k) {
        string res = "";
        for (int i = 0; i<s.size(); i++){
            if (k && s[i] != ' '){
                res.push_back(s[i]);
            }
            else if (k != 1 && s[i] == ' '){
                res.push_back(s[i]);
                k--;
            }
            else{
                return res;
            }
        }
        return res;
    }
};