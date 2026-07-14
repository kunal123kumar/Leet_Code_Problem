/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int level(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        return 1 + max(level(root->left), level(root->right));
    }
    bool isSame(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        int l = level(root->left);
        int r = level(root->right);
        int diff = abs(l - r);
        if (diff > 1) {
            return false;
        }
        return isSame(root->left) && isSame(root->right);
    }
    bool isBalanced(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        return isSame(root);
    }
};