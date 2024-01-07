class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        
        unordered_set<int> uniqueCandies(candyType.begin(), candyType.end());
        
        return min(n / 2, static_cast<int>(uniqueCandies.size()));
    }
};