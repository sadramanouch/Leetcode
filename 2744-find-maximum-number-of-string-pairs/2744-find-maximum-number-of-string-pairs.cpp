class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int res = 0;
        for (int i = 0; i<n; i++){
            std::sort(words[i].begin(), words[i].end());
        }
        for (int i = 0; i<n-1; i++){
            for (int j = i+1; j<n; j++){
                if (words[i] == words[j]){
                    res++;
                }
            }
        }
        return res;
    }
};