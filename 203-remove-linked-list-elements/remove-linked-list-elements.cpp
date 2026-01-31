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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*dummy = new ListNode(-1);
        dummy->next=head;
        ListNode*prev=dummy;

    while(head != NULL ){
       if(head->val==val){
        prev->next=head->next;
        head=prev->next;
       }
       else if(head->val!=val){
       prev=head;
       head=head->next;
       }
    }
     return dummy->next;   
    }
};