//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestXYDist(vector<vector<char>> grid, int N, int M) {
   vector<vector<bool>>visited(N,vector<bool>(M,0));
   queue<pair<int,int>>q;
   for(int i=0;i<N;i++)
   {
       for(int j=0;j<M;j++)
       {
           if(grid[i][j]=='Y')
           {
               visited[i][j]=true;
               q.push({i,j});
           }
       }
   }
   int steps=0;
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
       if(grid[x][y]=='X')
       return steps;
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
   return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        char ch;
        cin >> N >> M;

        vector<vector<char>> grid;

        for (int i = 0; i < N; i++) {
            vector<char> col;
            for (int i = 0; i < M; i++) {
                cin >> ch;
                col.push_back(ch);
            }
            grid.push_back(col);
        }

        Solution ob;
        cout << ob.shortestXYDist(grid, N, M) << endl;
    }
    return 0;
}
// } Driver Code Ends