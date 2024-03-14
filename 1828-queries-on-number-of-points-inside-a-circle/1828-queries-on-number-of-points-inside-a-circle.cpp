#include <vector>

class Solution {
public:
    int distance(int x1, int y1, int x2, int y2) {
        return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    }
    
    int countPointsInCircle(int x1, int y1, int r, int x2, int y2) {
        return distance(x1, y1, x2, y2) <= r * r;
    }
    
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> answer;
        for (const auto& query : queries) {
            int x1 = query[0], y1 = query[1], r = query[2];
            int count = 0;
            for (const auto& point : points) {
                if (countPointsInCircle(x1, y1, r, point[0], point[1])) {
                    count++;
                }
            }
            answer.push_back(count);
        }
        return answer;
    }
};
