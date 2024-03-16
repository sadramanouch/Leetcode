class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n);
        vector<int> right(n);
        vector<int> res(n);
        left[0] = 0;
        right[n-1] = 0;
        int sum = 0;
        for (int i = 1; i<n; i++){
            sum += nums[i-1];
            left[i] = sum;
        }
        sum = 0;
        for (int i = n-1; i>=1; i--){
            sum += nums[i];
            right[i-1] = sum;
        }
        for (int i = 0; i<n; i++){
            res[i] = abs(left[i] - right[i]);
        }
        return res;
    }
};