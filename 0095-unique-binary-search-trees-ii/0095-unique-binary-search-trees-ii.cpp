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
    vector<TreeNode*> helper(int l,int r)
    {
        if(l>r)
        { vector<TreeNode*>v;
         v.push_back(NULL);
         return v;
}
        vector<TreeNode*>res;
        for(int i=l;i<=r;i++)
        {
            vector<TreeNode*>lt=helper(l,i-1);
            vector<TreeNode*>rt=helper(i+1,r);
            for(int k=0;k<lt.size();k++)
            {
                for(int j=0;j<rt.size();j++)
                {
                    TreeNode* temp=new TreeNode;
                    temp->val=i;
                    temp->left=lt[k];
                    temp->right=rt[j];
                    res.push_back(temp);
}
}
}
        return res;
}
    vector<TreeNode*> generateTrees(int n) {
        return helper(1,n);
    }
};