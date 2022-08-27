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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)
            return head;
        if(n==0)
            return head;
        ListNode *curr=head;
        int len=0;
        while(curr!=NULL)
        {
            len++;
            curr=curr->next;
        }
        if(len==n)
        {
            curr= head->next;
        return curr;
    }
        curr=head;
        int i=1;
        int trev=len-n;
        while(i<trev&&curr!=NULL )
        {
            curr=curr->next;
            i++;
        }
        curr->next=curr->next->next;
        return head;
    }
};