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
     int len(ListNode *head)
        {
             int count =0;
            while(head!=NULL)
            {
                count++;
                head=head->next;
            }
         return count;
        }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)
            return head;
       ListNode *prev=NULL;
       ListNode *curr=head;
        ListNode *forward=NULL;
    int count =0;
       
        if(len(head)<k)
        {
            return head;
        }
        while(curr!=NULL  && count<k)
        {
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
        }
        
       
        if(forward!=NULL)
        {
            head->next=reverseKGroup(forward,k);
        }
        return prev;
        
    }
};