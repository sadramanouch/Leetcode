class Solution {
public:
    int minPartitions(string n) {
        int res = '0';
        for(int i = 0; i<n.size(); i++){
            if (n[i] > res){
                res = n[i];
            }
        }
        return res - '0';
    }
};