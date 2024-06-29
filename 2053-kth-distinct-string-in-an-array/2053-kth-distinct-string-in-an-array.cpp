class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> hash;
        for (const auto& str : arr) {
            hash[str]++;
        }
        
        int tmp = 0;
        string res = "";
        for (const auto& str : arr) {
            if (hash[str] == 1) { 
                tmp++;
                if (tmp == k) {
                    res = str;
                    break;
                }
            }
        }
        
        return res;
    }
};