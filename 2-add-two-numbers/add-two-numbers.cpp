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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL && l2==NULL) return NULL;
        if(l1!=NULL && l2==NULL) return l1;
        if(l1==NULL && l2!=NULL) return l2;
        ListNode*dummy=new ListNode(-1);
        ListNode*ans=dummy;
        int carry=0;
        while(l1!=NULL||l2!=NULL){
            int val_l1= (l1!=NULL)?l1->val:0;
            int val_l2= (l2!=NULL)?l2->val:0;
            int sum=val_l1 + val_l2 + carry;
            int d = sum%10;
            dummy->next=new ListNode(d);
            dummy=dummy->next;
            carry=sum/10;
            if(l1!=NULL) l1=l1->next;
            if(l2!=NULL) l2=l2->next;
        }
        if(carry)
        dummy->next = new ListNode(carry);
    return ans->next;  

    }
};