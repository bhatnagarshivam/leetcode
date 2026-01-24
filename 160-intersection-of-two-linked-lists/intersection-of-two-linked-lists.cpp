/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       int cntA=0;
       int cntB=0;
       ListNode*ptr1=headA;
       ListNode*ptr2=headB;
       while(ptr1 || ptr2){
            if(ptr1){
                cntA++;
                ptr1=ptr1->next;
            }
            if(ptr2){
                cntB++;
                ptr2=ptr2->next;
            }
       }
       ptr1=headA;
       ptr2=headB;
       if(cntA<cntB){
        int n =cntB-cntA;
        for(int i=0;i<n;i++){
            ptr2=ptr2->next;
        }
       }
        else if (cntA>cntB){
        int n =cntA-cntB;
        for(int i=0;i<n;i++){
            ptr1=ptr1->next;
        }
       }
       while(ptr1 != ptr2){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
       }
       return ptr1;
    }
};