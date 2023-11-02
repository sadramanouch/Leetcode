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
    void count_good(TreeNode* root, int good, int &res){
        if (root == nullptr){
            return;
        }
        if (root -> val >= good){
            res++;
            good = root->val;
        }
        count_good(root->left, good, res);
        count_good(root->right, good, res);
    }
    
    int goodNodes(TreeNode* root) {
        int res = 0;
        int good = root->val;
        count_good(root, good, res);
        return res;
    }
};