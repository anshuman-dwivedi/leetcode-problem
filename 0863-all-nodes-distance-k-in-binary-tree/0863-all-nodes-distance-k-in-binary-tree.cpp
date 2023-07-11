/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*,TreeNode*>mp;
    queue<TreeNode*>q;
    void helper(TreeNode* root)
    {
        q.push(root);
        while(!q.empty()){
            TreeNode* node=q.front();
            q.pop();
            if(node->left)
            {
                mp[node->left]=node;
                q.push(node->left);
}
                   if(node->right)
            {
                mp[node->right]=node;
                q.push(node->right);
}
}
}
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
       helper(root);
        queue<TreeNode*>pq;
    unordered_map<TreeNode*,bool>vis;
        pq.push(target);
        int cnt=0;
        vis[target]=true;
        while(!pq.empty())
        {
            int s=pq.size();
            if(k==cnt++)
                break;
            for(int i=0;i<s;i++)
            {
               TreeNode* node=pq.front();
            pq.pop();
                if(node->left && !vis[node->left])
                {
                    pq.push(node->left);
                    vis[node->left]=true;
}
                            if(node->right && !vis[node->right])
                {
                    pq.push(node->right);
                    vis[node->right]=true;
}
                                         if(mp[node] && !vis[mp[node]])
                {
                    pq.push(mp[node]);
                    vis[mp[node]]=true;
}
}
            
}
        vector<int>res;
        while(!pq.empty())
        {
         TreeNode* temp=pq.front();
            pq.pop();
            res.push_back(temp->val);
}
return res;    
        
    }
};