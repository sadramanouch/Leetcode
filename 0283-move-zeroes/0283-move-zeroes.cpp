class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero = 0;
        for (int i = 0; i<nums.size(); i++){
            if (nums[i] == 0){
                zero++;
            }
            else{
                nums[i-zero] = nums[i];
            }
        }
        for (int i = nums.size()-1; i>=0; i--){
            while (zero != 0){
                nums[i] = 0;
                zero--;
                i--;
            }
        }
    }
};