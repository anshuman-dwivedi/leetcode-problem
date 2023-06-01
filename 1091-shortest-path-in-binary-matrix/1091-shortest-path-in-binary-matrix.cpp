class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]==1)
            return -1;
        queue<pair<int,int>>q;
        int n=grid.size();
        int m=grid[0].size();
       int dx[]={0,1,-1,0,-1,-1,1,1};
        int dy[]={1,0,0,-1,-1,1,-1,1};
         q.push({0,0});
        grid[0][0]=1;
       
        while(!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
               if( x == n -1 && y == m -1) return grid[x][y];
            for(int i=0;i<8;i++)
            {
                int newx=x+dx[i];
                int newy=y+dy[i];
                if(newx>=0 && newx<n && newy>=0 && newy<m && grid[newx][newy]==0){
                    q.push({newx,newy});
                grid[newx][newy]=grid[x][y]+1;
                }
}
            q.pop();
}
        return -1;
    }
};