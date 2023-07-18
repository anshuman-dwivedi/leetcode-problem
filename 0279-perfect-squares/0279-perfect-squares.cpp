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
      vector<int>dp(n+1,-1);
       return  helper(n,dp);
    }
};