class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i<nums.size(); i++){
            if (nums[i] >= 1000 && nums[i] < 10000){
                count++;
            }
            if (nums[i] >= 10 && nums[i] < 100){
                count++;
            }
            if (nums[i] == 100000){
                count++;
            }
        }
        return count;
    }
};