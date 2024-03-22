class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> less;
        vector<int> more;
        int p = 0;
        vector<int> res(n);
        for (int i = 0; i<n; i++){
            if (nums[i] < pivot){
                less.push_back(nums[i]);
            }
            else if (nums[i] > pivot){
                more.push_back(nums[i]);
            }
            else{
                p++;
            }
        }
        for (int i = 0; i < n; i++) {
            if (i < less.size()) {
                res[i] = less[i];
            } else if (i < less.size() + p) {
                res[i] = pivot;
            } else {
                res[i] = more[i - less.size() - p];
            }
        }
        return res;
    }
};