class Solution {
public:
    int dirx[4]={-1,0,1,0};
    int diry[4]={0,1,0,-1};
    int helper(int r,int c,int m,int n,vector<vector<int>>& grid)
    {
        grid[r][c]=0;
        int area=1;
        for(int i=0;i<4;i++)
        {
            int newx=r+dirx[i];
            int newy=c+diry[i];
            if(newx>=0 && newy>=0 && newx<m && newy<n && grid[newx][newy]==1)
                area+=helper(newx,newy,m,n,grid);
}
        return area;
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
    int m=grid.size();
    int n=grid[0].size();
        int area=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(grid[i][j]==1)
            {
                area=max(area,helper(i,j,m,n,grid));
}
}
}
        return area;
    }
};