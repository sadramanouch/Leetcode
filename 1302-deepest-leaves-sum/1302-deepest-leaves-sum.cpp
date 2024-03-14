/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void deep(TreeNode* root, int level, unordered_map<int, int> &hash){
        if (!root) {
            return;
        }
        if (!root->left && !root->right){
            hash[level] += root->val;
            return;
        }
        deep(root->left, level+1, hash);
        deep(root->right, level+1, hash);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        unordered_map<int, int> hash;
        int level = 0;
        deep(root, level, hash);
        int deepestLevel = 0;
        for (const auto& pair : hash) {
            deepestLevel = max(deepestLevel, pair.first);
        }
        
        return hash[deepestLevel];
    }
};