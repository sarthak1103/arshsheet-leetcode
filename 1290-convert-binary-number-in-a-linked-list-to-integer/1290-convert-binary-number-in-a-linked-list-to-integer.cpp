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
    int getDecimalValue(ListNode* head) {
       int s1= 0;
        int count = 0;
        ListNode*curr = head;
        while(curr->next != NULL)
        {
            count++;
            curr = curr->next;
        }
        curr = head;
        count++;

        while(curr!= NULL and count>= 0)
        {
            s1 += curr->val*pow(2,(count-1));
            curr = curr->next;

            count--;
        }
        return s1;
    }
};