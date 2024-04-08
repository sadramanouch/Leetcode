class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> res;
        vector<int> path;
        dfs(graph, 0, graph.size() - 1, path, res);
        return res;
    }
    
    void dfs(vector<vector<int>>& graph, int node, int target, vector<int>& path, vector<vector<int>>& res) {
        path.push_back(node);
        if (node == target) {
            res.push_back(path);
            path.pop_back();
            return;
        }
        for (int next : graph[node]) {
            dfs(graph, next, target, path, res);
        }
        path.pop_back();
    }
};
