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
class FindElements {
private:
    unordered_set<int> elementsSet;

    void recoverTree(TreeNode* node, int val) {
        if (!node) return;
        node->val = val;
        elementsSet.insert(val);
        if (node->left) {
            recoverTree(node->left, 2 * val + 1);
        }
        if (node->right) {
            recoverTree(node->right, 2 * val + 2);
        }
    }

public:
    FindElements(TreeNode* root) {
        if (root) {
            recoverTree(root, 0);
        }
    }
    
    bool find(int target) {
        return elementsSet.find(target) != elementsSet.end();
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */