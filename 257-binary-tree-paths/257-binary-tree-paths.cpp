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
void leaf(TreeNode *root,vector<string> &ans,string s)
{
        if(!root) return;
        if(root->left || root->right) s+=to_string(root->val)+"->";
        else s+=to_string(root->val);
         if(!root->left && !root->right)
        {
            ans.push_back(s);
            return;
        }
        leaf(root->left,ans,s);
        leaf(root->right,ans,s);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string s="";
        leaf(root,ans,s);
        return ans;
    }
};