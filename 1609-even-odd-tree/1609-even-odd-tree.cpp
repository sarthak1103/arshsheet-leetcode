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
    bool check_asc(vector<int> v)
    {
        for(int i=1;i<v.size();i++)
        {
            if(v[i]<=v[i-1])
                return false;
        }
        return true;
    }
    bool check_dsc(vector<int> v)
    {
        for(int i=1;i<v.size();i++)
        {
            if(v[i]>=v[i-1])
                return false;
        }
        return true;
    }
    bool isEvenOddTree(TreeNode* root) {
        int level=0;
        if(root==NULL)
            return false;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            vector<int> ans;
            int size=q.size();
            for(int i=0;i<size;i++)
            {
              
                 TreeNode *temp=q.front();
                 q.pop();
                if(level%2!=0)
                {
                   if(temp->val%2!=0)
                   {
                       return false;
                   }
                }
                if(level%2==0)
                {
                    if(temp->val%2==0)
                    {
                        return false;
                    }
                }
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                ans.push_back(temp->val);
            }
            if(level==0)
            {
                level+=1;
                continue;
            }
            if(level%2==0)
            {
                if(!check_asc(ans))
                {
                    return false;
                }
            }
            if(level%2!=0)
            {
                if(!check_dsc(ans))
                {
                    return false;
                }
            }
            level+=1;
        }
        
        return true;
    }
};