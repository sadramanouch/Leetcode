class Solution {
public:
    vector<int> constructRectangle(int area) {
        int tmp = 0;
        int other = 0;
        int dif = area; 
        vector<int> anss(2, 0);
        
        if (area == 1){
            anss[0] = 1;
            anss[1] = 1;
            return anss;
        }

        for (int i = 1; i <= area / 2; i++) {
            if (area % i == 0) {
                tmp = i;
                other = area / i;
                int currentDif = abs(tmp - other);
                if (currentDif < dif) {
                    dif = currentDif;
                    anss[0] = other;
                    anss[1] = tmp;
                }
            }
        }
        return anss;
    }
};