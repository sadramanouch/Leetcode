class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        unordered_set<int> has_incoming;
        for (const auto& edge : edges) {
            has_incoming.insert(edge[1]);
        }
        vector<int> result;
        for (int i = 0; i < n; i++) {
            if (has_incoming.find(i) == has_incoming.end()) {
                result.push_back(i);
            }
        }
        return result;
    }
};