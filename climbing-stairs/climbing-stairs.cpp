class Solution {
public:
    int climbStairs(int n) {
        if (n == 0){
            return 1;
        }
        if ( n == 1){
            return 1;
        }
        int ans= 0;
        int first = 1;
        int second= 1;
        for (int i = 1; i<n; i++){
            ans = first + second;
            first = second;
            second = ans;
        }
        return ans;
    }
};