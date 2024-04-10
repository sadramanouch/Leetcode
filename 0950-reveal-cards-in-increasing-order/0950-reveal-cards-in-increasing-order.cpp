class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end());
        int n = deck.size();
        queue<int> indices;
        for (int i = 0; i < n; ++i) {
            indices.push(i);
        }
        vector<int> res(n);
        for (int card : deck) {
            int index = indices.front();
            indices.pop();
            res[index] = card;
            if (!indices.empty()) {
                index = indices.front();
                indices.pop();
                indices.push(index);
            }
        }
        return res;
    }
};