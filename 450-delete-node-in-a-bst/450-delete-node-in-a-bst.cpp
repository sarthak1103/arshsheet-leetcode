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
    
TreeNode *minVal(TreeNode *&root)
    {
    TreeNode * temp= root;
    while(temp!=NULL && temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
}

    
TreeNode* deleteNode(TreeNode* root, int key) {
        // base case
    if(root==NULL)
        return NULL;
     if(root->val>key)
    {
        root->left=deleteNode(root->left,key);
    }
    else if(root->val<key) {
        root->right=deleteNode(root->right,key);
    }
    else{
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }
        // 1 child
        if(root->left!=NULL && root->right==NULL)
        {
            TreeNode *temp=root->left;
            delete root;
            return temp;
        }

        else if(root->right!=NULL && root->left==NULL){
            TreeNode *temp=root->right;
            delete root;
           return temp;
        }

        // 2 child
        else
        {
             int mini=minVal(root->right)->val;
             root->val= mini;
             root->right=deleteNode(root->right,mini);

        }
    }
    // 0 child
    
    
   
   return root;
    }
};