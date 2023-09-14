class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if (nums.size() == 1){
            return nums[0];
        }
        sort(nums.begin(), nums.end());
        int res = 0;
        for (int i = 0; i<nums.size(); i++){
            if (nums[i] == nums[i+1]){
                i++;
            }
            else{
                res = nums[i];
            }
        }
        return res;
    }
};