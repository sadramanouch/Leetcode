class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int idx = 0;
        return buildBST(preorder, idx, INT_MIN, INT_MAX);
    }
    
    TreeNode* buildBST(vector<int>& preorder, int& idx, int minVal, int maxVal) {
        if (idx >= preorder.size() || preorder[idx] < minVal || preorder[idx] > maxVal)
            return nullptr;
        
        TreeNode* node = new TreeNode(preorder[idx++]);
        node->left = buildBST(preorder, idx, minVal, node->val);
        node->right = buildBST(preorder, idx, node->val, maxVal);
        
        return node;
    }
};
