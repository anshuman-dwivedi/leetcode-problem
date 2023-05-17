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
            return head;
        ListNode* newnode=reverse(head->next);
        ListNode* head1=head->next;
        head1->next=head;
        head->next=NULL;
        return newnode;
}
    int pairSum(ListNode* head) {
      ListNode* slow=head,*fast=head;
        int sum=0;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
}
        ListNode* rev=reverse(slow);
        while(rev){
       sum=max(rev->val+head->val,sum);
        head=head->next;
        rev=rev->next;
    }
return sum;        
    }
};