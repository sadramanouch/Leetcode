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
    int Tilt (TreeNode* root, int& count){
        if (root == NULL){
            return 0;
        }
        int leftsum = Tilt(root->left, count);
        int rightsum = Tilt(root->right, count);
        count += abs(leftsum - rightsum);
        return leftsum + rightsum + root->val;
    }
    
    int findTilt(TreeNode* root) {
        if (root == NULL){
            return 0;
        }
        int count = 0;
        Tilt(root, count);
        return count;
    }
};