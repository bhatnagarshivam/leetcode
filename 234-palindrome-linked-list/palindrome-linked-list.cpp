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
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL) return true;
        ListNode*curr=head;
        ListNode*dummy=head;
        int count=0;
        while(curr){
            count++;
            curr=curr->next;
        }
        int mid=count/2;
        while(--mid){
            dummy=dummy->next;
        }
         ListNode*rev=dummy->next;
         dummy->next=NULL;
         ListNode*prev=NULL;
         while(rev){
            ListNode*temp=rev->next;
             rev->next=prev;
             prev=rev;
             rev=temp;
         }
         while(head && prev){
            if(head->val!=prev->val) return false;
            head=head->next;
            prev=prev->next;
         }
         return true;
    }
};