class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> hash;
        for (const auto &num : nums){
            hash[num]++;
        }
        vector<int> res;
        for (const auto &entry : hash){
            if (entry.second == 1){
                res.push_back(entry.first);
            }
        }
        return res;
    }
};