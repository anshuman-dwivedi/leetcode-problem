class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int res = 0;
        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[0].size(); j++){
                if (i*j==0 || i==grid.size()-1 || j==grid[0].size()-1){
                   dfs(grid,i,j);
                }
            }
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==0)
                {
                    res++;
                    dfs(grid,i,j);
                }
}
}
        return res;
    }
    void dfs(vector<vector<int>>& g, int i, int j){
        if (i < 0 || j < 0 || i >= g.size() || j >= g[0].size() || g[i][j]==1){
            return;
        }
        g[i][j] = 1;
    dfs(g, i+1, j);
       dfs(g, i, j+1);
      dfs(g, i-1, j);
dfs(g, i, j-1);
}
};