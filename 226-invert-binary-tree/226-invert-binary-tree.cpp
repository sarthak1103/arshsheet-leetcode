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
    
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
        TreeNode * r1=root->left;
        TreeNode *r2=root->right;
        root->left=r2;
        root->right=r1;
        invertTree(root->left);
        invertTree(root->right);
        return root;
        
    }
};