class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
        int res = 0;
        for (int i = 0; i < n; ++i) {
            string info = details[i];
            string ageStr = info.substr(11, 2);
            int age = stoi(ageStr); 
            if (age > 60) {
                res++;
            }
        }
        
        return res;
    }
};