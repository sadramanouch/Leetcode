class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        int n = queries.size();
        vector<int> res(n);
        vector<int> perm(m);
        
        // Initialize the permutation array
        for (int i = 1; i <= m; i++) {
            perm[i - 1] = i;
        }
        
        // Process each query
        for (int i = 0; i < n; i++) {
            int pos = -1;
            // Find the position of the current query in the permutation
            for (int j = 0; j < m; j++) {
                if (perm[j] == queries[i]) {
                    pos = j;
                    break;
                }
            }
            res[i] = pos;
            // Move the current query to the beginning of the permutation
            for (int j = pos; j > 0; j--) {
                perm[j] = perm[j - 1];
            }
            perm[0] = queries[i];
        }
        
        return res;
    }
};
