class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        while (columnNumber > 0){
            int remainder = (columnNumber - 1) % 26;
            char tmp = 'A' + remainder;
            result = tmp + result;
            columnNumber = (columnNumber - 1)/26;
        }
        return result;
    }
};