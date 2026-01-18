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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*dummy=new ListNode(-1);
        ListNode*ans=dummy;
        ListNode*ptr1=list1;
        ListNode*ptr2=list2;
        while(ptr1 && ptr2){
            int val1=ptr1!=NULL?ptr1->val:0;
            int val2=ptr2!=NULL?ptr2->val:0;
            if(val1<=val2){
                dummy->next= new ListNode(val1);
                ptr1=ptr1->next;
            }
            else if(val1>val2){
                dummy->next=new ListNode(val2);
                ptr2=ptr2->next;
            }
            dummy=dummy->next;
            }
            if(ptr1!=NULL) dummy->next=ptr1;
            if(ptr2!=NULL) dummy->next=ptr2;
            return ans->next; 
    }
};