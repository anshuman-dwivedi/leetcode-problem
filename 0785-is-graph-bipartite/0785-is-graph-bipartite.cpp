class Solution {
public:
    bool dfs(vector<int>&col ,vector<vector<int>>graph,int n,int i)
    {
  
    for(auto it:graph[i])
    {
        if(col[it]==-1)
        {
            col[it]=!col[i];
            if(dfs(col,graph,n,it)==false)
                return false;
}
        else if(col[it]==col[i])
            return false;
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
               col[i]=0;
             if(dfs(col,graph,n,i)==false)
                 return false;
          }
}
        return true;
    }
};