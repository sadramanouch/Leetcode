// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int res = n/2;
        int yes = -1;
        while (isBadVersion(res)){
            res = res/2;
        }
        while (!isBadVersion(res)){
            res = res+1;
            if (isBadVersion(res)){
                yes = res;
            }
        }
        return yes;
    }
};