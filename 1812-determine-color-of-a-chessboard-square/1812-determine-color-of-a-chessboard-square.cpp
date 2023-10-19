class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int m = static_cast<int>(coordinates[1]);
        if (coordinates[0] == 'a' || coordinates[0] == 'c' || coordinates[0] == 'e' || coordinates[0] == 'g'){
            if (m % 2 == 1){
                return false;
            }
            return true;
        }
        if (coordinates[0] == 'b' || coordinates[0] == 'd' || coordinates[0] == 'f' || coordinates[0] == 'h'){
            if (m % 2 == 0){
                return false;
            }
            return true;
        }
        return true;
    }
};