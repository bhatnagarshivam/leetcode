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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return NULL;
     ListNode*ptr1=head;
     ListNode*prev=NULL;
        while(ptr1){
            ListNode*temp=ptr1->next;
            ptr1->next=prev;
            prev=ptr1;
            ptr1=temp;
        }
        return prev;
    }
};