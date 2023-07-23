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
    vector<TreeNode*> helper(int n){
    if(n==1)
        return {new TreeNode(0)};
        n--;
        vector<TreeNode*>res;
        vector<TreeNode*>left;
        vector<TreeNode*>right;
        for(int i=1;i<n;i+=2)
        {
       left= helper(i);
            right=helper(n-i);
            for(TreeNode* j:left)
            {
                for(TreeNode* k:right)
                {
                    TreeNode* root=new TreeNode(0);
                    root->left=j;
                    root->right=k;
                    res.push_back(root);
                }
}
}
return res;        
}
    
    vector<TreeNode*> allPossibleFBT(int n) {
      if(n==0)
          return {new TreeNode(0)};
        else if(!(n&1))
            return {};
        else if(n==3)
        {
            return {new TreeNode(0,new TreeNode(0),new TreeNode(0))};
}
        else
            return helper(n);
    }
};