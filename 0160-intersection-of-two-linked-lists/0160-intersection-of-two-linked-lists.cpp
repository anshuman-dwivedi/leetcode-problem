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
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        ListNode* pointer1 = head1;
    ListNode* pointer2 = head2;
    if (pointer1 == NULL || pointer2 == NULL)
        return NULL;
    while (pointer1 != pointer2) {

        pointer1 = pointer1->next;
        pointer2 = pointer2->next;
        if (pointer1 == pointer2)
            return pointer1;
        if (pointer1 == NULL)
            pointer1 = head2;
        if (pointer2 == NULL)
            pointer2 = head1;
    }
    return pointer1;
}    
};