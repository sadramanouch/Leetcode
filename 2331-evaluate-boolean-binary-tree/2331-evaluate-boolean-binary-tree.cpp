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
    int DFS(TreeNode* root) {
        if (!root){
            return 0;
        }
        if (!root->left && !root->right){
            return root->val;
        }
        
        int leftVal = DFS(root->left);
        int rightVal = DFS(root->right);
        
        if (root->val == 2){
            return leftVal || rightVal;
        }
        if (root->val == 3){
            return leftVal && rightVal;
        }
        return 0;
    }
    
    bool evaluateTree(TreeNode* root) {
        return DFS(root);
    }
};