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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*n=NULL;
        ListNode* prev=NULL;
        ListNode* curr=head;
        int count=0;
        int cnt=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
    }
        if(cnt<k)
            return head;
        while(curr!=NULL && count<k)
        {
            n=curr->next;
            curr->next=prev;
            prev=curr;
            curr=n;
            count++;
}
        if(head)
            head->next=reverseKGroup(curr,k);
      return prev;  
    }
};