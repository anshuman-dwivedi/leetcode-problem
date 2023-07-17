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
     ListNode* reverse(ListNode* head)
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* tail=reverse(head->next);
      ListNode* newe=head->next;
      newe->next=head;
        head->next=NULL;
        return tail;
    } 
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
             int sum=0,carry=0;
    ListNode* fr=reverse(l1);
      ListNode* se=reverse(l2);
        sum+=fr->val+se->val+0;
        fr=fr->next;
        se=se->next;
        carry=sum/10;
         sum=sum%10;
         ListNode * newnode=new ListNode(sum);
          ListNode* temp=newnode;
   while(fr!=NULL || se!=NULL || carry==1)
      {
          sum=carry;
          if(fr)
          {
         sum+=(fr->val);
          }
           if(se)
          {
         sum+=(se->val);
          }
         carry=sum/10;
         sum=sum%10;
       
    
     temp->next=new ListNode(sum);
          temp=temp->next;
         if(fr)
         {
            fr=fr->next;
         }
         if(se)
         {
            se=se->next;
         }
         
      }
       
      return reverse(newnode);
    }
};