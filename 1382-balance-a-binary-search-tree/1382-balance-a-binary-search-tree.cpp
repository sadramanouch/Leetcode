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
    TreeNode* balanceBST(TreeNode* root) {
        // Step 1: Perform an in-order traversal to collect all nodes into an array
        vector<TreeNode*> nodes;
        inorderTraversal(root, nodes);
        
        // Step 2: Construct a new balanced BST from the sorted array of nodes
        return buildBalancedBST(nodes, 0, nodes.size() - 1);
    }
    
private:
    // Perform an in-order traversal of the BST
    void inorderTraversal(TreeNode* root, vector<TreeNode*>& nodes) {
        if (root == nullptr) return;
        inorderTraversal(root->left, nodes);
        nodes.push_back(root);
        inorderTraversal(root->right, nodes);
    }
    
    // Construct a balanced BST from a sorted array of nodes
    TreeNode* buildBalancedBST(vector<TreeNode*>& nodes, int start, int end) {
        if (start > end) return nullptr;
        
        int mid = start + (end - start) / 2;
        TreeNode* root = nodes[mid];
        
        root->left = buildBalancedBST(nodes, start, mid - 1);
        root->right = buildBalancedBST(nodes, mid + 1, end);
        
        return root;
    }
};
