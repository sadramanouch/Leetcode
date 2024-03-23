class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int res = 0;
        for (int i = 0; i<nums.size(); i++){
            if (nums[i] < k){
                res++;
            }
            else{
                break;
            }
        }
        return res;
    }
};