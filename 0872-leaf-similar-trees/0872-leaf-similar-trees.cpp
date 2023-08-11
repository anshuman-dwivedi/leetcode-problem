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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string s1;
        string s2;
        helper(root1,s1);
        helper(root2,s2);
        return s1==s2;
            
    }
    void helper(TreeNode* root,string& s)
    {
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL)
        {
            s+=root->val;
}
        helper(root->left,s);
        helper(root->right,s);
}
    
};