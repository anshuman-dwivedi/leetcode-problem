//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
       vector<vector<char>>ans(n,vector<char>(m,'X'));
       vector<vector<bool>>vis(n,vector<bool>(m,0));
      queue<pair<int,int>>q;
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {
                if(i==0 || j==0 || i==n-1 || j==m-1){
              if(mat[i][j]=='O')
              {
                  vis[i][j]=true;
                  q.push({i,j});
                  ans[i][j]='O';
              }
          }
          }
      }
      int dx[]={-1,0,1,0};
      int dy[]={0,-1,0,1};
      while(!q.empty())
      {
          int x=q.front().first;
          int y=q.front().second;
          q.pop();
          for(int i=0;i<4;i++)
          {
              int newx=x+dx[i];
              int newy=y+dy[i];
              if(newx>=0 && newx<n && newy>=0 && newy<m && vis[newx][newy]!=true && mat[newx][newy]=='O')
              {
               vis[newx][newy]=true;
               ans[newx][newy]='O';
               q.push({newx,newy});
              }
          }
      }
      return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends