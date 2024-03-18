class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size(); 
        int tmp = 0;
        vector<int> ans (n,0);
        for (int i = 0; i<n; i++){
            for (int j = 0; j<n; j++){
                if (j != i && boxes[j] == '1'){
                    tmp += abs(j-i);
                }
            }
            ans[i] = tmp;
            tmp = 0;
        }
        return ans;
    }
};