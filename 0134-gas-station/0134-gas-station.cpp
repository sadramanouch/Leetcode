class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tg = 0;
        int tc = 0;
        int cg = 0;
        int ss = 0;
        for (int i = 0; i<gas.size(); i++){
            tg += gas[i];
            tc += cost[i];
            cg += (gas[i] - cost[i]);
            if (cg < 0){
                cg = 0;
                ss = i+1;
            }
        }
        if (tg >= tc){
            return ss;
        }
        return -1;
    }
};