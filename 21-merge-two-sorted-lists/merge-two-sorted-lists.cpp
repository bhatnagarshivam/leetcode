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
        if(list1==NULL && list2==NULL) return NULL;
        if(list1!=NULL && list2==NULL) return list1;
        else if(list1==NULL && list2!=NULL) return list2;
        ListNode*dummy = new ListNode(-1);
        ListNode*ans=dummy;
        ListNode*ptr1=list1;
        ListNode*ptr2=list2;
        while(ptr1!=NULL && ptr2!=NULL){
            if(ptr1->val <= ptr2->val){
                dummy->next=ptr1;
                dummy=dummy->next;
                ptr1=ptr1->next;
            }
            else if(ptr1->val > ptr2->val){
                dummy->next=ptr2;
                dummy=dummy->next;
                ptr2=ptr2->next;
            }
        }
        if(ptr1) dummy->next=ptr1;
        else if(ptr2) dummy->next=ptr2;
        return ans->next;
    }
};