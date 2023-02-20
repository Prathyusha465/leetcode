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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int>m1;
        ListNode*dummy=head;
        if(head==NULL)
         return NULL;
        if(head->next==NULL)
         return head;
        while(dummy!=NULL)
        {
            m1[dummy->val]++;
            dummy=dummy->next;
        }
        
        while(m1[head->val]>1 && head!=NULL)
        {
         head=head->next;
         if(head->next==NULL && m1[head->val]>1)
          return NULL;
        }
         dummy=head;
        ListNode*ans=dummy;
        while(dummy->next)
        {
            if(m1[dummy->next->val]>1)
             dummy->next=dummy->next->next;
            else
             dummy=dummy->next;
        }
        return head;
    }
};