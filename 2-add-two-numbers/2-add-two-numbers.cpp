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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res= new ListNode();
        ListNode* h=res;
        int car=0;
        while(l1 || l2){
            if(l1 && l2){
                ListNode* dummy= new ListNode();
                int s=l1->val+l2->val+car;
                if(s>9&&car==0){
                    car+=1;
                }
                if(s<=9 && car!=0){
                    car=0;
                }
                if(s>9)
                    s=s%10;
                dummy->val=s;
                if(res)
                    res->next=dummy;
                else
                    res->val=dummy->val;
                l1=l1->next;
                l2=l2->next;
            }
            else if(l1){
                ListNode* dummy= new ListNode();
                int s=l1->val+0+car;
                if(s>9&&car==0){
                    car+=1;
                }
                if(s<=9 && car!=0){
                    car=0;
                }
                if(s>9)
                    s=s%10;
                dummy->val=s;
                if(res)
                    res->next=dummy;
                else
                    res->val=dummy->val;
                l1=l1->next;
            }
            else{
                ListNode* dummy= new ListNode();
                int s=0+l2->val+car;
                if(s>9&&car==0){
                    car+=1;
                }
                if(s<=9 && car!=0){
                    car=0;
                }
                if(s>9)
                    s=s%10;
                dummy->val=s;
                if(res)
                    res->next=dummy;
                else
                    res->val=dummy->val;
                l2=l2->next;
            }
            res=res->next;
        }
        if(car!=0){
            ListNode* dummy= new ListNode();
            dummy->val=car;
            res->next=dummy;
        }
        return h->next;
    }
};