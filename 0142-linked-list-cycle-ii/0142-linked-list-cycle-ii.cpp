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
    ListNode *detectCycle(ListNode *head) {
           ListNode* slow,*fast;
        slow=head;
        fast=head;
        if(head==NULL || head->next==NULL)
            return NULL;
      while(fast !=NULL && fast->next!=NULL)
      {
          slow=slow->next;
          fast=fast->next->next;
          if (slow==fast)
          break;
      }
   if (slow != fast)
    return NULL;
    slow=head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
           // ListNode* temp=slow;
           /* while(temp->next!=slow)
            {
                temp=temp->next;
            }*/
   
  // temp->next=NULL;
        return slow;
    }
};