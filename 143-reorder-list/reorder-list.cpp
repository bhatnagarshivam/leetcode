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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL) return;
        int count=0;
        ListNode*p1=head;

         while(p1){
                count++;
                p1=p1->next;
         }
         p1=head;
         int middle = count/2;
         while(middle--){
            p1=p1->next;
         }
         ListNode*middlenode=p1;
         ListNode*p2=middlenode->next;
         middlenode->next=NULL;
         ListNode*prev=NULL;
         while(p2){
        ListNode*temp=p2->next;
          p2->next=prev;
          prev=p2;
          p2=temp;
         }
       ListNode*l1=head;
       ListNode*l2=prev;
       while(l1 && l2){
        ListNode*t1=l1->next;
        ListNode*t2=l2->next;
        l1->next = l2;
        l2->next =t1;
        l1=t1;
        l2=t2;
       }
        
    }
};