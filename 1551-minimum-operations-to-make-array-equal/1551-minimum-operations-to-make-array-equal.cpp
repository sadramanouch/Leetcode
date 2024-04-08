class Solution {
public:
    int minOperations(int n) {
        vector<int> tmp (n);
        int res = 0;
        for (int i = 0; i<n; i++){
            tmp[i] = (i*2)+1;
            if (tmp[i] < n){
                res += n - tmp[i];
            }
        }
        return res;
    }
};