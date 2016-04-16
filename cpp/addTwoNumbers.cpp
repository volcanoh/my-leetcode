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
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *l3 = new ListNode(0);
    ListNode *result = l3;
    int carry = 0;
    while(l1 != NULL || l2 !=NULL)
      {
        l3->val = carry + (l1?l1->val:0)+(l2?l2->val:0);
        carry = l3->val / 10;
        if(l1)l1=l1->next;
        if(l2)l2=l2->next;
        if((carry == 0) && (l1 == NULL) && (l2 == NULL))
          break;
        l3->val = l3->val - carry * 10;
        l3->next = new ListNode(carry);
        l3 = l3->next;
      }

    return result;
  }
};
