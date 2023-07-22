class Solution {
public:
    double knightProbability(int N, int steps, int start_x, int start_y) {
         vector<vector<double>>dp(N,vector<double>(N,0.0));
	   dp[start_x][start_y]=1.0;
	   while(steps--)
	   {
	       int dirx[]={-2,2,-1,1,-2,2,-1,1};
	       int diry[]={1,1,2,2,-1,-1,-2,-2};
	       vector<vector<double>>ndp(N,vector<double>(N,0.0));
	       for(int i=0;i<N;i++)
	       {
	           for(int j=0;j<N;j++)
	           {
	             for(int k=0;k<8;k++)
	             {
	             int newx=i+dirx[k];
	             int newy=j+diry[k];
	             if(dp[i][j]!=0)
	             {
	             if(newx>=0 && newy>=0 && newx<N && newy<N)
	                 ndp[newx][newy]+=dp[i][j]/8.0;
	             }
	             }
	           }
	       }
	       dp=ndp;
	   }
	   double ans=0.0;
	   for(int i=0;i<N;i++)
	   {
	       for(int j=0;j<N;j++)
	       {
	           ans+=dp[i][j];
	       }
	   }
	   return ans; 
    }
};