class Solution {
public:
    int smallestEvenMultiple(int n) {
        int res = 0;
        int j = 0;
        int i = 1;
        while (1){
            j = n*i;
            if (j % 2 == 0){
                res = j;
                break;
            }
            i++;
        }
        return j;
    }
};