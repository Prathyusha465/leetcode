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
    ListNode* rotateRight(ListNode* head, int k) {
    if(!head || !head->next)
        return head;
      int i=1;
        ListNode*temp=head;
        while(temp->next)
        {
            i++;
            temp=temp->next;
        }
        k=k%i;
        temp->next=head;
        temp=head;
        for(int j=0;j<i-k-1;j++)
        {
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
    
        
        
    }
};