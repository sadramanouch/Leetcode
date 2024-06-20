class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int res = 0;
        int j = 0;
        for (int i = 0; i<n; i++){
            if (s[i] == '('){
                j++;
            }
            else if (s[i] == ')'){
                j--;
            }
            if (j > res){
                res = j;
            }
        }
        return res;
    }
};