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
        if((head==NULL || head->next==NULL) ) return head;
        ListNode*curr=head;
        int count=0;
        while(curr){
            count++;
            curr=curr->next;
        }
         k=k%count;
         if(k==0) return head;
        ListNode*slow=head;
        ListNode*fast=head;
        ListNode*prev=NULL;
        for(int i=0;i<k;i++){
            fast=fast->next;
        }
        while(fast!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next;
        }
        prev->next=NULL;
        ListNode*ans=slow;
        while(slow->next!=NULL){
            slow=slow->next;
        }
        slow->next=head;
        return ans;
    }
};