/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int pindex=0;
    TreeNode* helper(vector<int>& preorder,vector<int>& inorder,int s,int e)
    {
        if(s>e)
            return NULL;
         TreeNode* root=new TreeNode(preorder[pindex++]);
        int inindex=0;
        for(int i=s;i<=e;i++)
        {
            if(inorder[i]==root->val)
            {
                inindex=i;
                break;
}
}
        root->left=helper(preorder,inorder,s,inindex-1);
        root->right=helper(preorder,inorder,inindex+1,e);
        return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int s=0;
        int e=inorder.size()-1;
       return helper(preorder,inorder,s,e);
    }
};