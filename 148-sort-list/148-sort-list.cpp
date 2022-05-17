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
    ListNode *mergesort(ListNode *Node1, ListNode *Node2)
    {
        ListNode *dummy = new ListNode(0);
        ListNode *curr=dummy;
        while(Node1!=NULL && Node2!=NULL)
        {
            if(Node1->val<=Node2->val)
            {
                curr->next=Node1;
                Node1=Node1->next;
            }
            else{
                curr->next=Node2;
                Node2=Node2->next;
            }
            curr=curr->next;
        }
        if(Node1!=NULL)
        {
            curr->next=Node1;
            Node1=Node1->next;
        }
        if(Node2!=NULL)
        {
            curr->next=Node2;
            Node2=Node2->next;
        }
        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
     if(head==NULL||head->next==NULL) return head;
      ListNode *slow=head;
     ListNode *fast=head;
        ListNode *temp=NULL;
        while(fast!=NULL && fast->next!=NULL)
        {
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
            
        }
        temp->next=NULL;
        ListNode *temp1=sortList(head);
        ListNode *temp2=sortList(slow);
        return mergesort(temp1,temp2);
    }
};