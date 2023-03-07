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
    int maxLevelSum(TreeNode* root) {
        if(root==NULL)
        return 0;
      queue<TreeNode*>q;
      q.push(root);
      int sum=0,maxi=INT_MIN,count=0,level=0;
      while(!q.empty())
      {
sum=0;
          int len=q.size();
          for(int i=0;i<len;i++)
          {
              TreeNode* temp=q.front();
              q.pop();
            sum+= temp->val;
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
          }
          level++;
         if(maxi<sum)
         {
           count=level;
}
          maxi=max(sum,maxi);
      }
     return count; 
    }
};