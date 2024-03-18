class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int sz = 0;
        vector<int> times(nums.size()/2);
        vector<int> vals(nums.size()/2);
        for (int i = 0; i<nums.size(); i+=2){
            sz += nums[i];
            times[i/2] = nums[i];
            vals[i/2] = nums[i+1];
        }
        vector<int> res(sz);
        int j = 0;
        int i = 0;
        while (i < sz){
            int mul = times[j];
            for (int k = 0; k < mul; k++){
                res[i] = vals[j];
                i++;
            }
            j++;
        }
        return res;
    }
};
