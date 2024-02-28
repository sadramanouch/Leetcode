class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res = 0;
        for (int i = 0; i<operations.size(); i++){
            if (operations[i].find("++") != string::npos){
                res++;
            }
            else{
                res--;
            }
        }
        return res;
    }
};