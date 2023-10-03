class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res = 0;
        int tmp = 0;
        for (int i = 0; i<gain.size(); i++){
            tmp+= gain[i];
            if (tmp > res){
                res = tmp;
            }
        }
        return res;
    }
};