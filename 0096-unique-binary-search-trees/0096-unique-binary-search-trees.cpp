class Solution {
public:
    int helper(int n,vector<int>&dp)
    {
        if(n<=1)
            return 1;
        if(dp[n]!=0)
            return dp[n];
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            dp[n]+=helper(i-1,dp)*helper(n-i,dp);
} 
        return dp[n];
}
    int numTrees(int n) {
       vector<int>dp(20,0);
        return helper(n,dp);
    }
};
