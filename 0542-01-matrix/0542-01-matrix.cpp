class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        queue<pair<int,int>>q;
       vector<vector<int>>dis(m,vector<int>(n,-1));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if( mat[i][j]==0)
                {
                    q.push({i,j});
                    dis[i][j]=0;
}
}
}
        int dirx[]={-1,0,1,0};
        int diry[]={0,-1,0,1};
        while(!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int newx=x+dirx[i];
                int newy=y+diry[i];
                if(newx>=0 && newy>=0 && newx<m && newy<n  && dis[newx][newy]==-1)
                {
                 q.push({newx,newy});
             dis[newx][newy]=dis[x][y]+1;
                    
}
}
            
}
        return dis;
    }
};