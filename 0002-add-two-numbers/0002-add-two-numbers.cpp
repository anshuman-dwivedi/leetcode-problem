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
    ListNode* addTwoNumbers(ListNode* t1, ListNode*t2) {
       
       ListNode* newnode=new ListNode(0);
        ListNode* temp=newnode;//*t1=l1,*t2=l2;
        int carry=0;
        while(t1!=NULL || t2!=NULL){
            int a=(t1!=NULL)?t1->val:0;
              int b=(t2!=NULL)?t2->val:0;
       int sum=(a+b+carry);
        carry=(sum/10);
        temp->next=new ListNode(sum%10);
            temp=temp->next;
            if(t1!=NULL)
       t1=t1->next;
            if(t2!=NULL)
            t2=t2->next;
                
}
        if(carry!=0)
        {
           
            temp->next=new ListNode(carry);;
            temp=temp->next;
}
     
        return newnode->next;
}
};