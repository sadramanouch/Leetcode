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
    void traverse (TreeNode* root1, vector<int>& leaf){
        if (root1 == nullptr){
            return;
        }
        if (root1->left == nullptr && root1->right == nullptr){
            leaf.push_back(root1->val);
            return;
        }
        traverse(root1->left, leaf);
        traverse(root1->right, leaf);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaf1;
        vector<int> leaf2;
        traverse(root1, leaf1);
        traverse(root2, leaf2);
        return leaf1 == leaf2;
    }
};