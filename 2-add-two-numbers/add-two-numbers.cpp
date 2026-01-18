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
        ListNode*dummy=new ListNode(-1);
        ListNode*ans=dummy;
        ListNode*ptr1=l1;
        ListNode*ptr2=l2;
        int carry=0;
        while(ptr1 || ptr2){
            int Val_1=(ptr1!=NULL)?ptr1->val:0;
            int Val_2=(ptr2!=NULL)?ptr2->val:0;
            int sum=Val_1+Val_2+carry;
            int d=sum%10;
            carry=sum/10;
            dummy->next=new ListNode(d);
            dummy=dummy->next;
      ptr1=( ptr1!=NULL)?ptr1->next:NULL;
      ptr2=( ptr2!=NULL)?ptr2->next:NULL;
        }
        if(carry){
            dummy->next=new ListNode(carry);
        }
       return ans->next; 
    }
};