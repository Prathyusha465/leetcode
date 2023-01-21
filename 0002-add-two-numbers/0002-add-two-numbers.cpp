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
      int carry=0;
     int ans=0;
     int val;
    ListNode c1;
   ListNode *c2=&c1;
     while(l1||l2||carry)
     {
     val=((l1?l1->val:0)+ (l2?l2->val:0) + carry);
      carry=val/10;
     c2->next=new ListNode(val%10);
      c2=c2->next;
     if(l1)
         l1=l1->next;
     if(l2) 
         l2=l2->next;
    }
     return c1.next;
     }
      
};