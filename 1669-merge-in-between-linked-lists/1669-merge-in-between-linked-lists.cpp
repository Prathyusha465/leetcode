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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* back=list1;
        ListNode* front=list1;
        ListNode* sec=list2;
        while(sec->next!=NULL){
            sec=sec->next;
        }
        int x=0;
        while(x<a-1  && front->next){
            front=front->next;
            back=back->next;
            x++;
        }
        while(x<b+1 && back->next){
            back=back->next;
            x++;
        }
        sec->next=back;
        front->next=list2;
        return list1;
    }
};