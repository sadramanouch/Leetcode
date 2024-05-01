class Solution {
public:
    int countKeyChanges(string s) {
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
            return std::tolower(c);
        });
        int n = s.size();
        int res = 0;
        for (int i = 0; i<n-1; i++){
            if (s[i] != s[i+1]){
                res++;
            }
        }
        return res;
    }
};