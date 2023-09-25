class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int sz = word1.length() + word2.length();
        int j = 0;
        int k = 0;
        for (int i = 0; i<sz; i++){
            if (i%2 == 0){
                if (j == word1.length()){
                    ans += word2[k];
                    k++;
                }
                else{
                    ans += word1[j];
                    j++;
                }
            }
            if (i%2 == 1){
                if (k == word2.length()){
                    ans += word1[j];
                    j++;
                }
                else{
                    ans += word2[k];
                    k++;    
                }
            }
        }
        return ans;
    }
};