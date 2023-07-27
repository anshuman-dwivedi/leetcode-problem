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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL && root2==NULL)
            return NULL;
        if(!root1)
            return root2;
    if(!root2)
        return root1;
   queue<pair<TreeNode*,TreeNode*>>q;
        q.push({root1,root2});
        while(!q.empty())
        {
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                TreeNode* temp1=q.front().first;
                TreeNode* temp2=q.front().second;
                q.pop();
                if(temp2!=NULL)
                temp1->val+=temp2->val;
                if(temp1->left && temp2->left)
                    q.push({temp1->left,temp2->left});
                else if(temp2->left)
                    temp1->left=temp2->left;
                if(temp1->right && temp2->right)
                    q.push({temp1->right,temp2->right});\
                    else if(temp2->right)
                        temp1->right=temp2->right;
}
}
        return root1;
    }
};