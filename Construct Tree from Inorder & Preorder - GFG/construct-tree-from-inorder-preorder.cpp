//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    int pindex=0;
    Node* helper(int preorder[],int inorder[],int s,int e)
    {
        if(s>e)
            return NULL;
        Node* root=new Node(preorder[pindex++]);
        int inindex=0;
        for(int i=s;i<=e;i++)
        {
            if(inorder[i]==root->data)
            {
                inindex=i;
                break;
}
}
     root->left=helper(preorder,inorder,s,inindex-1);
        root->right=helper(preorder,inorder,inindex+1,e);
        return root;
}
    Node* buildTree(int in[],int pre[], int n)
    {
           int s=0;
        int e=n-1;
       return helper(pre,in,s,e);
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends