class Solution {
public:
    int helper(int n ,vector<int>& dp)
    {
        if(n<=0)
            return 0;
        if(dp[n]!=-1)
            return dp[n];
        int res=INT_MAX;

            for(int i=1;i*i<=n;i++)
            {
                int sq=i*i;
               int count=1+helper(n-sq,dp);
                  res=min(res,count);
}
        return dp[n]=res;
}
    int numSquares(int n) {
      vector<int>dp(n+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i*i<=n;i++)
        {
            int p=i*i;
        for(int sq=p;sq<n+1;sq++)
            dp[sq]=min(dp[sq-p]+1,dp[sq]);
}
       return  dp[n];
    }
};