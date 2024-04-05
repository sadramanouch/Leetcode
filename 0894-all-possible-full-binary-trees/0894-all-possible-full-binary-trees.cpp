class Solution {
public:
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> result;
        if (n % 2 == 0) {
            return result; 
        }
        if (n == 1) {
            TreeNode* root = new TreeNode(0);
            result.push_back(root);
            return result;
        }
        for (int i = 1; i < n; i += 2) {
            vector<TreeNode*> leftSubtrees = allPossibleFBT(i);
            vector<TreeNode*> rightSubtrees = allPossibleFBT(n - 1 - i);
            for (TreeNode* left : leftSubtrees) {
                for (TreeNode* right : rightSubtrees) {
                    TreeNode* root = new TreeNode(0);
                    root->left = left;
                    root->right = right;
                    result.push_back(root);
                }
            }
        }
        return result;
    }
};
