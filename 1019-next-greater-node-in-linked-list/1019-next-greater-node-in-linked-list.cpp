/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>v;
     
        while(head!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        }
        
        stack<int>stk;
        vector<int>ans(v.size());
        
        ans[ans.size()-1]=0;
        
        stk.push(v[v.size()-1]);
        
        for(int i=v.size()-2;i>=-0;i--)
        {
            int val=v[i];
            
            while(!stk.empty() and stk.top()<=val)
            {
                stk.pop();           
            }
            
            if(stk.empty()==true)
            {
                ans[i]=0;
                stk.push(val);
            }
            else
            {
                ans[i]=stk.top();
                stk.push(val);
            }
        }
        return ans;
    }
};