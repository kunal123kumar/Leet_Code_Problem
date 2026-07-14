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
    int helper(TreeNode* root,int ans){
        if(root==NULL){
            return ans;
        }
        return max(helper(root->left,ans)+1,helper(root->right,ans)+1);
    }
    int maxDepth(TreeNode* root) {
       return  helper(root,0);
    }
};