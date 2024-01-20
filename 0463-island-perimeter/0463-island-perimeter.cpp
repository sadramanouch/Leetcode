class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int land = 0;
        int two = 0, four = 0;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    land++;

                    if (j + 1 < grid[0].size() && grid[i][j + 1] == 1) {
                        two++;
                    }

                    if (i + 1 < grid.size() && grid[i + 1][j] == 1) {
                        two++;
                    }
                }
            }
        }

        int res = land * 4 - two * 2;
        return res;
    }
};