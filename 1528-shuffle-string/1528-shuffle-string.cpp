class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = indices.size();
        string res = "";
        unordered_map<int, char> hash;
        int i = 0;
        for (auto & ch : s) {
            hash[indices[i++]] = ch;
        }
        for (int j = 0; j < n; j++) {
            res.push_back(hash[j]);
        }
        return res;
    }
};