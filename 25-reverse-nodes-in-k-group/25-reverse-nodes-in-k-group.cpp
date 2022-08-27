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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode *curr=head;
        int len=0;
        while(curr!=NULL)
        {
            len++;
            curr=curr->next;
        }
        if(len<k)
            return head;
        ListNode *pre=head;
        ListNode *prev=NULL;
        ListNode *nex=NULL;
        int count=0;
        while(pre!=NULL && count<k)
        {
        nex=pre->next;
       pre->next=prev;
       prev=pre;
       pre=nex;
        count++;
    }
    if (nex!=NULL)
    {
        head->next=reverseKGroup(nex,k);
    }
    return prev;
}
};