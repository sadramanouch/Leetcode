class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        int targetIndex = 0;  
        for (int i = 1; i <= n; i++) {
            if (targetIndex >= target.size()) {
                break;  
            }
            if (target[targetIndex] == i) {
                res.push_back("Push");
                targetIndex++; 
            } 
            else {
                res.push_back("Push");
                res.push_back("Pop");
            }
        }
        return res;
    }
};