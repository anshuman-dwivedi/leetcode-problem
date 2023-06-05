//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
            int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>visited(m,vector<int>(n,0));
        queue<pair<int,int>>q;
       for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(i*j==0 || i==m-1 || j==n-1)
               {
                   if(grid[i][j]==1)
                   {
                       q.push({i,j});
                       visited[i][j]=1;
}
}
}
}
        int dx[]={-1,1,0,0};
        int dy[]={0,0,-1,1};
        while(!q.empty())
        {
            int s=q.front().first;
            int t=q.front().second;
            q.pop();
            for(int k=0;k<4;k++)
            {
                int newx=s+dx[k];
                int newy=t+dy[k];
                if(newx>=0 && newx<m && newy>=0 && newy<n && grid[newx][newy]==1 && !visited[newx][newy]){
                    q.push({newx,newy});
                visited[newx][newy]=1;
                }            
}
}
            int ans=0;
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(grid[i][j]==1 && visited[i][j]==0)
                        ans++;
}
}
            return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends