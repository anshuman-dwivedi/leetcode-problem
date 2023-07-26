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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
            ListNode* fH=NULL;
     ListNode* fT=NULL;
   while(head1!=NULL && head2!=NULL)
   {
    if(head1->val <= head2->val) 
    {
        if(fH==NULL)
        {
        fH=head1;
        fT=head1;
}
else{
    fT->next=head1;
    fT=fT->next;
}
head1=head1->next;
    }
     else if(head1->val >= head2->val) 
    {
        if(fH==NULL)
        {
        fH=head2;
        fT=head2;
}
else{
     fT->next=head2;
    fT=fT->next;
}
head2=head2->next;
    }
   }
   
   while(head1!=NULL)
   {
       if(fH !=NULL)
       {
        fT->next=head1;
    fT=fT->next;
       }
       else
       {
           fH=head1;
           fT=head1;
}
       head1=head1->next;
   }
   while(head2!=NULL)
   {
        if(fH !=NULL)
       {
      fT->next=head2;
    fT=fT->next;
        }
         else
       {
           fH=head2;
           fT=head2;
}
       head2=head2->next;
   }
   return fH;
}
};