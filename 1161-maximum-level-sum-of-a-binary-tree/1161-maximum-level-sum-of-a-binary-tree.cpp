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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> p;
        int sum = INT_MIN;
        int tmp = 0;
        int ret = 0;
        int x = 1;  
        TreeNode* g = nullptr;
        p.push(root);
        while (!p.empty()) {
            tmp = 0; 
            int n = p.size();
            while (n) {
                g = p.front();
                p.pop();
                tmp += g->val;
                if (g->left) {
                    p.push(g->left);
                }
                if (g->right) {
                    p.push(g->right);
                }
                n--;
            }
            if (tmp > sum) {
                sum = tmp;
                ret = x; 
            }
            x++; 
        }
        return ret;
    }
};