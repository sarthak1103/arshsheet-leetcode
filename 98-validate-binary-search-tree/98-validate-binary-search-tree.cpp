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
    bool isBst(TreeNode* root,long  min,long max)
    {
        // base case 
        if(root==NULL)
            return true;
        if(root->val>min && root->val<max)
        {
            // here we will check the range for left node that it is in range of int min to root data 
            bool left=isBst(root->left,min,root->val); 
            // and here we check same for right node the range for this node will be root->data to the infinity 
            bool right=isBst(root->right,root->val,max);
            return left && right;// we will return the bool value 
            
        }
        else{
            return false;
        }
        
    }
    
    bool isValidBST(TreeNode* root) {
     return isBst(root,LONG_MIN,LONG_MAX);
    }
};