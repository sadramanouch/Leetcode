class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int res = 0;
        int i=0;
        while(i<nums.size()){
          int j=i;
          int count = 2;
          while( j<nums.size() && nums[i]==nums[j] ){
              if(count>0){
                  nums[res]=nums[i];
                  res++;
              }
              count--;
              j++;
          }
          i=j; 
        }
        return res;
    }
};