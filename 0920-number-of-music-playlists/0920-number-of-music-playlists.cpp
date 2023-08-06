class Solution {
public:
    long long int mod=1e9+7;
    int helper(int n,int goal,int k,vector<vector<long long>>& dp)
    {
        if(n==0 && goal==0)
            return 1;
        if(n==0 || goal==0)
            return 0;
    if(dp[n][goal]!=-1)
        return dp[n][goal];
        long long int pick=(helper(n-1,goal-1,k,dp)%mod*(n))%mod;
        long long int np=(helper(n,goal-1,k,dp)%mod*max(n-k,0))%mod;
       return  dp[n][goal]=(pick+np)%mod;
}
    int numMusicPlaylists(int n, int goal, int k) {
       vector<vector<long long>>dp(n+1,vector<long long>(goal+1,-1));
        return helper(n,goal,k,dp);
    }
};