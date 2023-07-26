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
    ListNode* reverse(ListNode* l1,ListNode* l2)
    {
        
        ListNode*prev=l2;
        ListNode* next;
        while(l1!=l2)
        {
            next=l1->next;
            l1->next=prev;
            prev=l1;
            l1=next;
            
        }
        return prev;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
       for(int i=0;i<k;i++)
       {
           if(!temp)
               return head;
           temp=temp->next;
       }
        auto newh=reverse(head,temp);
        head->next=reverseKGroup(temp,k);
        return newh;
        
         
    }
};
