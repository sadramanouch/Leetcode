class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size(); 
        int count = 1;
        for (int i = 0; i<n-1; i++){
            if (nums[i] != 0 && nums[i] != nums[i+1]){
                count++;
            }
        }
        if (nums[0] == 0 && nums[n-1] == 0){
            count--;
        }
        return count;
    }
};