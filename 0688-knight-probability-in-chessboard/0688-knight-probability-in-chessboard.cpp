class Solution {
public:
    double knightProbability(int N, int steps, int start_x, int start_y) {
         vector<vector<vector<double>>>dp(steps+1,vector<vector<double>>(N,vector<double>(N,0.0)));
	   dp[0][start_x][start_y]=1.0;
	       int dirx[]={-2,2,-1,1,-2,2,-1,1};
	       int diry[]={1,1,2,2,-1,-1,-2,-2};
            for(int k=1;k<=steps;k++){
	       for(int i=0;i<N;i++)
	       {
	           for(int j=0;j<N;j++)
	           {
	             for(int dir=0;dir<8;dir++)
	             {
	             int newx=i+dirx[dir];
	             int newy=j+diry[dir];
	             if(newx>=0 && newy>=0 && newx<N && newy<N)
	                 dp[k][i][j]+=(dp[k-1][newx][newy]/8.0);
	             }
	           }
	   }
            }
	   double ans=0.0;
        
	   for(int i=0;i<N;i++)
	   {
	       for(int j=0;j<N;j++)
	       {
	           ans+=dp[steps][i][j];
	       }
	   }
	   return ans; 
    }
};