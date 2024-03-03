class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> res;
        for (int i = 0; i<points.size(); i++){
            res.push_back(points[i][0]);
        }
        sort(res.begin(), res.end());
        int solution = 0;
        for (int i = 0; i<res.size() - 1; i++){
            int tmp = 0;
            if (abs(res[i]-res[i+1]) > solution){
                solution = abs(res[i]-res[i+1]);
            }
        }
        return solution;
    }
};