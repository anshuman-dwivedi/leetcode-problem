//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// design the class in the most optimal way

class LRUCache
{
    private:
class node{
    public:
    node* next;
    node* prev;
    int key,val;
    node(int _key,int _val)
    {
        key=_key;
        val=_val;
        next=NULL;
        prev=NULL;
    }
};
    public:
    //Constructor for initializing the cache capacity with the given value.
      node* head=new node(-1,-1);
    node* tail=new node(-1,-1);
    unordered_map<int,node*>mp;
    int cap;
    LRUCache(int capacity)
    {
        // code here
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }
    
    //Function to return value corresponding to the key.
    void addnode(node* resnode)
    {
    node* temp=head->next;
    resnode->next=temp;
    resnode->prev=head;
    head->next=resnode;
    temp->prev=resnode;
    }
    void delnode(node* delnode)
    {
     node* delprev=delnode->prev;
     node* delnext=delnode->next;
     delprev->next=delnext;
     delnext->prev=delprev;
    }
    int GET(int key)
    {
        if(mp.find(key)!=mp.end())
        {
            node* res=mp[key];
            int ans=res->val;
            mp.erase(key);
            delnode(res);
            addnode(res);
            mp[key]=head->next;
            return ans;
        }
        return -1;
    }
    
    //Function for storing key-value pair.
    void SET(int key, int value)
    {
        if(mp.find(key)!=mp.end())
        { node* en=mp[key];
           mp.erase(key);
            delnode(en);
         
       }
       if(cap==mp.size())
       { mp.erase(tail->prev->key);
           delnode(tail->prev);
          
       }
       addnode(new node(key,value));
       mp[key]=head->next;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->SET(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->GET(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends