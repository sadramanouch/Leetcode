class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        for (int i = 0; i<=n-m; i++){
            int j = 0;
            while (j < m && needle[j] == haystack[i+j]){
                j++;
            }
            if (j == m){
                return i;
            }
        }
        return -1;
    }
};