class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> hash;
        int n = nums.size();
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
            
        for(int i=0;i<n;i++){
            if(hash[nums[i]]%2 != 0){
                return false;
            }
        }
        return true;
    }
};