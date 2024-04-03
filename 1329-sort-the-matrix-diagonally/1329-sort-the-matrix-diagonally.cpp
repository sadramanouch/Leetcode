class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> res(n, vector<int>(m));
        unordered_map<int,int> hash;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                hash[mat[i][j]]++;
            }
        }
        for (int k = n - 1; k >= 0; k--) {
            sortDiagonal(mat, k, 0, hash);
        }
        for (int k = 1; k < m; k++) {
            sortDiagonal(mat, 0, k, hash);
        }
        return mat;
    }
    
    void sortDiagonal(vector<vector<int>>& mat, int i, int j, unordered_map<int,int>& hash) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> diagonal;
        while (i < n && j < m) {
            diagonal.push_back(mat[i][j]);
            i++;
            j++;
        }
        sort(diagonal.begin(), diagonal.end());
        while (!diagonal.empty()) {
            mat[--i][--j] = diagonal.back();
            diagonal.pop_back();
        }
    }
};
