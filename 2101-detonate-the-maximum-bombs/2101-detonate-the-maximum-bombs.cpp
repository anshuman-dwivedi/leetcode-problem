class Solution {
public:
  #define ll long long int
    public:
    void dfs(vector<vector<int>> &graph,vector<bool> &visited,int &c,int &i)
    {
        visited[i]=true;
        c++;
        for(auto itr:graph[i])
        {
            if(!visited[itr])
             dfs(graph,visited,c,itr);   
        }
    }
    int maximumDetonation(vector<vector<int>>& bombs) {

        int n=bombs.size();
        vector<vector<int> > graph(n);
        for(int i=0;i<n;i++)
        {
            ll x1,x2,r;
            x1=bombs[i][0];
            x2=bombs[i][1];
            r=bombs[i][2];
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                     ll x,y;
                     x=abs(x1-bombs[j][0]);
                     y=abs(x2-bombs[j][1]);
                    if(x*x+y*y<=r*r)
                    {
                        graph[i].push_back(j);
                    }
                }
            }
        }
        int res=INT_MIN;
      
        for(int i=0;i<n;i++)
        {
            int c=0;
              vector<bool> visited(n,false);
            dfs(graph,visited,c,i);
            res=max(res,c);
        }
        return res;
    }
};