class Solution {
public:
    int maxProfit(vector<int>& p, int fee) {
          int n=p.size();
     vector<vector<int>>dp(n+1,vector<int>(2,0));
        dp[n][0]=dp[n][1]=0;
        for(int i=n-1;i>=0;i--)
        {
          
                    dp[i][1]=max(-p[i]+dp[i+1][0],0+dp[i+1][1]);

                 dp[i][0]=max(p[i]-fee+dp[i+1][1],0+dp[i+1][0]);   
}
       return dp[0][1];
    }
};