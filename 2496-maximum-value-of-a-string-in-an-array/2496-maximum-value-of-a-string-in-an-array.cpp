class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int n = strs.size();
        int res = 0;
        
        for (int i = 0; i < n; i++) {
            bool isAlpha = false;
            for (int j = 0; j < strs[i].size(); j++) {
                if (strs[i][j] >= 'a' && strs[i][j] <= 'z') {
                    isAlpha = true;
                    break;
                }
            }
            if (isAlpha) {
                int tmp = strs[i].size();
                res = max(res, tmp);
            } else {
                int tmp = atoi(strs[i].c_str());
                res = max(res, tmp);
            }
        }
        
        return res;
    }
};