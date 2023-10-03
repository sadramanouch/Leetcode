class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int last_occurrence = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] <= target){
                start = mid + 1;
            }  
            else{
                end = mid - 1;
            }   
            if (nums[mid] == target){
                last_occurrence = mid;
            }  
        }
        start = 0;
        end = nums.size() - 1;
        int first_occurrence = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] >= target){
                end = mid - 1;
            }  
            else{
                start = mid + 1;
            }  
            if (nums[mid] == target){
                first_occurrence = mid;
            }   
        }
        vector<int> res = {first_occurrence, last_occurrence};
        return res;
    }
};