class Solution {
public:
    int mod=1e9+7;
    int helper(int idx,int zero,int one,vector<int>& dp)
    {
        if(idx==0)
            return 1;
        if(idx<0)
            return 0;
        if(dp[idx]!=-1)
            return dp[idx]%mod;
        return dp[idx]=(helper(idx-zero,zero,one,dp)+helper(idx-one,zero,one,dp))%mod;
}
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int>dp(high+1,-1);
        int ans=0;
        for(int i=low;i<=high;i++)
        {
            ans=(ans%mod+(helper(i,zero,one,dp))%mod)%mod;
}
        return ans;
    }
};