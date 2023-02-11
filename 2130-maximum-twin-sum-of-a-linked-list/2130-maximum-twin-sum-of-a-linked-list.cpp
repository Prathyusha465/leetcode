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
    int pairSum(ListNode* head) {
      if(head==NULL) 
         return 0;
    ListNode*slow=head->next;
    ListNode*fast=head->next->next;
     while(fast ) 
     {
       slow=slow->next;
       fast=fast->next->next;
     }
    stack<int>st;
      while(slow) 
      {
        st.push(slow->val);
         slow=slow->next;
      }
      int maxi=INT_MIN;
       while(!st.empty())
       {
          maxi=max(maxi,head->val+st.top());
          st.pop();
          head=head->next;
       }
       return maxi;
    }
};