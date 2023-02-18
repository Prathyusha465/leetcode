/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next)
         return NULL;
        ListNode* slow=head->next;
        ListNode* fast=head->next->next;
        while(fast!=slow)
        {
            slow=slow->next;
            if(fast==nullptr || fast->next==nullptr)
             return nullptr;
            fast=fast->next->next;
        }
        slow=head;
        while(slow!=fast)
        {
            fast=fast->next;
            slow=slow->next;
        }

        return fast;
    }
};