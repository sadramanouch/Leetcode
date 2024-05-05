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
    void CC (TreeNode* root, vector <int> &tmp){
        if (!root){
            return;
        }
        int res = root->val;
        tmp.push_back(res);
        CC (root->left, tmp);
        CC (root->right, tmp);
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector <int> tmp;
        CC (root2, tmp);
        CC (root1, tmp);
        sort(tmp.begin(), tmp.end());
        return tmp;
    }
};