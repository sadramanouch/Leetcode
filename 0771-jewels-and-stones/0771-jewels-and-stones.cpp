class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int res = 0;
        unordered_map<char, int> hash; 
        for (char stone : stones){
            hash[stone]++;
        }
        for (char jewel : jewels){
            res += hash[jewel];
        }
        return res;
    }
};