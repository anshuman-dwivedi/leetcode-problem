class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
          int N=grid.size();
        int M=grid[0].size();
       vector<vector<bool>>visited(N,vector<bool>(M,0));
   queue<pair<int,int>>q;
      
   for(int i=0;i<N;i++)
   {
       for(int j=0;j<M;j++)
       {
           if(grid[i][j]==1)
           {
               visited[i][j]=true;
               q.push({i,j});
           }
       }
   }
         if (q.empty() || q.size() == N* M) 
            return -1;
   int steps=-1;
   int dx[4]={-1,0,1,0};
   int dy[4]={0,-1,0,1};
   while(!q.empty())
   {
       int s=q.size();
       while(s--)
       {
       int x=q.front().first;
       int y=q.front().second;
       q.pop();
       for(int k=0;k<4;k++)
       {
           int newx=x+dx[k];
           int newy=y+dy[k];
           if(newx>=0 && newy>=0 && newx<N && newy<M && !visited[newx][newy])
           {
               q.push({newx,newy});
               visited[newx][newy]=true;
           }
       }
       }
       steps++;
   }
   return steps;
    }
};