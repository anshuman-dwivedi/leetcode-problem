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
    ListNode* swapNodes(ListNode* head, int k) {
        int t=k;
        ListNode* s=head,* s1=head,* temp=NULL;
       while(--t) 
      s=s->next;
    temp=s;
        s=s->next;
        while(s)
        {
            s=s->next;
            s1=s1->next;
}
        swap(temp->val,s1->val);
        return head;
    }
};