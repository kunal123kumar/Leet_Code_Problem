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
// class Solution {
// public:
//     void helper(TreeNode* root, int lev, int
//     curr,vector<int>&temp,vector<vector<int>>&ans) {
//         if (root == NULL) {
//             return;
//         }
//         if (curr==lev) {
//             temp.push_back(root->val);
//             return;
//         }
//         helper(root->left, lev, curr + 1,temp,ans);
//         helper(root->right, lev, curr + 1,temp,ans);
//     }
//     int level(TreeNode* root) {
//         if (root == NULL) {
//             return 0;
//         }
//         return 1 + max(level(root->left), level(root->right));
//     }
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
//         vector<int>temp;
//         int n = level(root);
//         for (int i = 1; i <= n; i++) {
//             helper(root, i, 1,temp,ans);
//             ans.push_back(temp);
//             temp.clear();
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int levels(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        return 1 + max(levels(root->left), levels(root->right));
    }
    void helper(TreeNode* root ,vector<vector<int>>&ans,vector<int>&temp,int l,int s){
        if(root==NULL){
            return ;
        }
        if(s == l){
            temp.push_back(root->val);
            return ;
        }
        if(root->left!=NULL){
            helper(root->left,ans,temp,l,s+1);
        }
        if(root->right!=NULL){
           helper(root->right,ans,temp,l,s+1);
         
        }
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n = levels(root);
        for(int i =0;i<n;i++){
            helper(root,ans,temp,i,0);
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};
