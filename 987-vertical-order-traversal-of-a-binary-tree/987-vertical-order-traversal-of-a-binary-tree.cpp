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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int> > > nodes;
        queue<pair<TreeNode*,pair<int,int> > > q;
       // vector<vector<int> > ans;
        // if(root==NULL)
        //     return ans;
        q.push(make_pair(root,make_pair(0,0)));
        while(!q.empty())
        {
            pair<TreeNode*,pair<int,int> > temp=q.front();
            q.pop();
            TreeNode *FirstNode=temp.first;
            int hd=temp.second.first;
            int level=temp.second.second;
            nodes[hd][level].insert(FirstNode->val);
            if(FirstNode->left)
                q.push(make_pair(FirstNode->left,make_pair(hd-1,level+1)));
            if(FirstNode->right)
                q.push(make_pair(FirstNode->right,make_pair(hd+1,level+1)));
        }
        vector<vector<int> >ans;
        for(auto i:nodes)
        {
            vector<int> cols;
            for(auto p:i.second)
            {
                cols.insert(cols.end(),p.second.begin(),p.second.end());
            }
            ans.push_back(cols);
        }
        return ans;
    }
};