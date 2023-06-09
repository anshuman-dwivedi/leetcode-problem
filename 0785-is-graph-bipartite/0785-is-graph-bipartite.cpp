class Solution {
public:
    bool bfs(vector<int>&col ,vector<vector<int>>graph,int n,int i)
    {
    queue<int>q;
        q.push(i);
        col[i]=0;
        while(!q.empty())
        {
            int t=q.front();
            q.pop();
            for(auto it:graph[t])
            {
                if(col[it]==-1){
                  col[it]=!col[t];
                q.push(it);
                }
                else if(col[it]==col[t])
                    return false;
}
}
        return true;
}
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
     vector<int>col(n,-1);
        for(int i=0;i<n;i++)
        {
          if(col[i]==-1)
          {
             if(bfs(col,graph,n,i)==false)
                 return false;
          }
}
        return true;
    }
};