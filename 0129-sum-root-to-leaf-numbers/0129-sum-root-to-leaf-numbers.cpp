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
    void helper(TreeNode* root,string sum, int&  ans)
{
    if(root==NULL)
    {
      return; 
    }
    if(root->left==NULL && root->right==NULL)
    {
  ans+=stoi(sum+to_string(root->val));
        return;
    }
  helper(root->left,sum+to_string(root->val),ans);
    helper(root->right,sum+to_string(root->val),ans);
    
}

    int sumNumbers(TreeNode* root) {
        string sum="";
 int ans=0;
 helper(root,sum,ans);
   return ans;  
    }
};