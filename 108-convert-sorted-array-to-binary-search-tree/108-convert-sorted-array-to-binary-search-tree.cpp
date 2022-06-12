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
    
    TreeNode* change(vector<int>&arr,int l,int r)
    {
        if(l>r)
            return NULL;
        int mid= (l+r)/2;
        TreeNode *temp=new TreeNode(arr[mid]);
        temp->left=change(arr,l,mid-1);
        temp->right=change(arr,mid+1,r);
        return temp;
        
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return change(nums,0,nums.size()-1);
    }
};