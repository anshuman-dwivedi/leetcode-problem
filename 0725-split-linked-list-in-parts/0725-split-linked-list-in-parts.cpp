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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
      int l=0;
        ListNode* temp=head;
        while(temp)
        {
            l++;
            temp=temp->next;
        }
        
        int no=l/k;
        int e=l%k;
        int i=0;
        vector<ListNode*> res;
        temp=head;
        while(temp)
        {
            res.push_back(temp);
            int currLen=1;
            while(currLen<no)
            {
                temp=temp->next;
                currLen++;
            }
            if(e>0 && l>k)
            {
                temp=temp->next;
                e--;
            }
            ListNode* x=temp->next;
            temp->next=NULL;
            temp=x;
        }
        while(l<k)
        {
            res.push_back(NULL);
            l++;
        }
        return res;  
    }
};