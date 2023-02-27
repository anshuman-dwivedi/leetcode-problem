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
    ListNode* reversed(ListNode* head)
{
    if(head==NULL || head->next==NULL)
        return head;
    ListNode* temp=reversed(head->next);
head->next->next=head;
head->next=NULL;
return temp;
}
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)
            return head;
     ListNode* revs=NULL,*revend=NULL;
        ListNode* revs_prev=NULL,*revend_next=NULL;
        int i=1;
        ListNode* curr=head;
         while( curr && i<=right)
         {
             if(i<left)
                 revs_prev=curr;
             if(i==left){
                 revs=curr;
}
             if(i==right)
             {
                 revend =curr;
                 revend_next=curr->next;
}
            curr=curr->next;
             i++;
             
}
        revend->next=NULL;
        ListNode* ans=reversed(revs);
        if(revs_prev)
            revs_prev->next=ans;
   else
            head=ans;
            revs->next=revend_next;
     return head;   
    }
};