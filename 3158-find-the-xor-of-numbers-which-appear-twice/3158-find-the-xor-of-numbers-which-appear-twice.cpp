class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int res = 0;
        bool hasDupl = false;
        for (int i = 0; i<n-1; i++){
            if (nums[i] == nums[i+1]){
                res ^= nums[i];
                hasDupl = true;
            }
        }
        if(!hasDupl){
            return 0;
        }
        return res;
    }
};