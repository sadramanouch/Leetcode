/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxRoot(Node* root, int depth){
        if (root == NULL){
            return depth;
        }
        int maxDepth = depth;
        for (Node* child : root->children){
            maxDepth = max(maxDepth, maxRoot(child, depth+1));
        }
        return maxDepth;
    }
    
    int maxDepth(Node* root) {
        if (root == NULL){
            return 0;
        }
        return maxRoot(root, 1);
    }
};