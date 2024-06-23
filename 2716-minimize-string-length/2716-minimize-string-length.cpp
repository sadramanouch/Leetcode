class Solution {
public:
    int minimizedStringLength(string s) {
        sort(s.begin(), s.end());
        int n = s.size();
        int res = 1;
        for (int i = 0; i<n-1; i++){
            if (s[i] != s[i+1]){
                res++;
            }
        }
        return res;
    }
};