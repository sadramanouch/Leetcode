class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
        int tmp = 0;
        for (int i = 0; i<nums.size(); i++){
            tmp += nums[i];
            sum.push_back(tmp);
        }
        return sum;
    }
};