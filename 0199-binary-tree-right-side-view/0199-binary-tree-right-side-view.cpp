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
    vector<int> rightSideView(TreeNode* root) {
        std::vector<int> res;
        if (root == nullptr) {
            return res;
        }
        queue<TreeNode*> levelQueue;
        levelQueue.push(root);
        while (!levelQueue.empty()) {
            int levelSize = levelQueue.size();
            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = levelQueue.front();
                levelQueue.pop();
                if (i == levelSize - 1) {
                    res.push_back(node->val);
                }
                if (node->left) {
                    levelQueue.push(node->left);
                }
                if (node->right) {
                    levelQueue.push(node->right);
                }
            }
        }
        return res;
    }
};