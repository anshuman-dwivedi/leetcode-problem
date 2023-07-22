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
    pair<int,int> helper(TreeNode* root)
    {
    if(root==NULL)
        return {0,0};
  pair<int,int>l=helper(root->left);
   pair<int,int>r=helper(root->right);     
        int i_c=root->val+l.second+r.second;
        int e_c=max(l.first,l.second)+max(r.first,r.second);
        pair<int,int> ans={i_c,e_c};
     return ans;   
        
}
    int rob(TreeNode* root) {
        
        pair<int,int>result=helper(root); 
        return max(result.first,result.second);
     
    }
};