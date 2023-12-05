class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        if (n != 1){
            for (int i = 0; i<n-1; i++){
                for (int j = i+1; j<n; j++){
                    if (nums[j] < nums[i]){
                        int tmp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = tmp;
                    }
                }
            }
        }
    }
};