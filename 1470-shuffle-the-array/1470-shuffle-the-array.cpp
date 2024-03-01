class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res (nums.size());
        int j = 0;
        for (int i = 0; i<nums.size(); i++){
            if (i % 2 == 0){
                res[i] = nums[i-j];
            }
            else{
                res[i] = nums[n+j];
                j++;
            }
        }
        return res;
    }
};