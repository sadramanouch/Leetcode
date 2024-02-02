#include <vector>

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int rows = image.size();
        int cols = image[0].size();

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols / 2; j++) {
                int tmp = image[i][j];
                image[i][j] = image[i][cols - 1 - j];
                image[i][cols - 1 - j] = tmp;

                if (image[i][j] == 0){
                    image[i][j] = 1;
                }
                else{
                    image[i][j] = 0;
                }

                if (image[i][cols - 1 - j] == 0){
                    image[i][cols - 1 - j] = 1;
                }
                else{
                    image[i][cols - 1 - j] = 0;
                }
            }
        }

        if (cols % 2 == 1) {
            for (int i = 0; i < rows; i++) {
                if(image[i][cols / 2] == 0){
                    image[i][cols / 2] = 1;
                }
                else{
                    image[i][cols / 2] = 0;
                }
            }
        }

        return image;
    }
};
