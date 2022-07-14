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
        
            int count=0;
            ListNode *curr=head;
        if(curr->next==NULL){
            return NULL;
        }
            while(curr!=NULL)
            {
                count++;
                curr=curr->next;  
                
            }
       
        if(count==n){
          curr=head->next;
//             while(curr->next->next!=NULL){
//                 curr=curr->next;
                
//             }
            // curr->next=NULL;
            return curr;
        }
        
            cout<<count;
            curr=head;
            int i=1;
            int move=count-n;
            while(i<move && curr!=NULL)
            {
                curr=curr->next;
                i++;
            }
        
        
        
          curr->next=curr->next->next;
          
          return head;
          
        }
};