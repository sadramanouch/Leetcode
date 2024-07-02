class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m = mat.size(); 
        int n = mat[0].size();
        vector<int> ress;
        int tmp = 0;
        int res = 0;
        int index = 0;
        for (int i = 0; i<m; i++){
            for (int j = 0; j<n; j++){
                tmp += mat[i][j];
            }
            if (tmp > res){
                res = tmp;
                index = i;
            }
            tmp = 0;
        }
        ress.push_back(index);
        ress.push_back(res);
        return ress;
    }
};