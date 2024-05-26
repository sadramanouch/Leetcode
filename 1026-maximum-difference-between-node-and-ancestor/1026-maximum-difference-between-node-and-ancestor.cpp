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
    void traverse(TreeNode* root, int minVal, int maxVal, int &diff) {
        if (!root) {
            return;
        }
        minVal = min(minVal, root->val);
        maxVal = max(maxVal, root->val);
        diff = max(diff, maxVal - minVal);
        traverse(root->left, minVal, maxVal, diff);
        traverse(root->right, minVal, maxVal, diff);
    }
    
    int maxAncestorDiff(TreeNode* root) {
        int diff = 0;
        traverse(root, root->val, root->val, diff);
        return diff;
    }
};