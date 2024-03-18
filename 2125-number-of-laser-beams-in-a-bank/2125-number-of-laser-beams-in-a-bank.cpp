class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int tmp = 0;
        int tmp2 = 0;
        int res = 0;
        for (int i = 0; i<bank.size(); i++){
            for (int j = 0; j<bank[i].size(); j++){
                if (bank[i][j] == '1'){
                    tmp++;
                }
            }
            if (tmp != 0){
                if (tmp2 != 0){
                    res += tmp2 * tmp;
                }
                tmp2 = tmp;
                tmp = 0;
            }
        }
        return res;
    }
};