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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0 || lists.empty())
            return NULL;
        priority_queue<int,vector<int>,greater<int>> pq;
for(int i=0;i<lists.size();i++)
{
    /* if(lists[i]==NULL)
     {
        continue;
}*/
    while(lists[i]!=NULL )
    {
        pq.push(lists[i]->val);
        lists[i]=lists[i]->next;
    }
   
}
        if(pq.size()==0)
            return NULL;
ListNode* fH=new ListNode(pq.top());
pq.pop();
ListNode*temp=fH;
while(!pq.empty())
{
temp->next=new ListNode(pq.top());
pq.pop();
temp=temp->next;
}
temp->next=NULL;
return fH;
    }
};