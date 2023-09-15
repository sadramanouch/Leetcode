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
    int high(TreeNode* root, int &res){
        if (root == nullptr){
            return 0;
        }
        int l = high(root->left, res);
        int r = high(root->right, res);
        res = max(res, l+r);
        return max(l, r)+1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        high(root, res);
        return res;
    }
};