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
    bool isBalanced(TreeNode* root) {
        if (root == nullptr){
            return true;
        }  
		if (height(root) == -1){
            return false;
        } 
		return true;
	}

	int height(TreeNode* root) {
		if (root == nullptr){
            return false;  
        } 
		int lh = height(root->left);
		int rh = height(root->right);
		if (lh == -1 || rh == -1 || abs(lh - rh) > 1){
            return -1;
        }  
		return max(lh, rh) + 1;
    }
};