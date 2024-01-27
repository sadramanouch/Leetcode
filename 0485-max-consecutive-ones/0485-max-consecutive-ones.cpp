class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int tmp = 0;
        int res = 0;
        for (int i = 0; i<n; i++){
            if (nums[i] == 1){
                res++;
                tmp = max(tmp,res);
            }
            else{
                res = 0;
            }
        }
        return tmp;
    }
};