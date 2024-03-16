class Solution {
public:
    TreeNode* search(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if (!original) {
            return nullptr;
        }
        if (original == target) {
            return cloned;
        }
        TreeNode* left = search(original->left, cloned->left, target);
        TreeNode* right = search(original->right, cloned->right, target);
        return left ? left : right;
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return search(original, cloned, target);
    }
};
