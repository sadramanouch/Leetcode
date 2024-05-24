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
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> res;
        search(root, res);
        sort(res.begin(), res.end());
        TreeNode* T = nullptr;
        TreeNode* G = nullptr;
        for (int i = 0; i < res.size(); i++){
            TreeNode* newNode = new TreeNode(res[i]);
            if (!T) {
                T = newNode;
                G = T;
            } 
            else {
                T->right = newNode;
                T = T->right;
            }
        }
        return G;
    }
    
    void search(TreeNode* root, vector<int> &res) {
        if (!root){
            return;
        }
        res.push_back(root->val);
        search(root->left, res);
        search(root->right, res);
    }
};