class Solution {
public:
    int helper(vector<int>piles,vector<int>s,vector<vector<int>>& dp,int i,int M)
    {
        if(i==piles.size())
            return 0;
            if(i+2*M>=piles.size())
                return s[i];
        if(dp[i][M]!=-1)
            return dp[i][M];
        int res=0;
        for(int x=1;x<=2*M;x++)
        {
            res=max(res,s[i]-helper(piles,s,dp,i+x,max(x,M)));
}
        return dp[i][M]=res;
        
}
    int stoneGameII(vector<int>& piles) {
        if(piles.empty())
            return 0;
        int n=piles.size();
vector<int>ss(n,0);
        ss[n-1]=piles[n-1];
        for(int i=n-2;i>=0;i--)
        {
            ss[i]+=ss[i+1]+piles[i];
}
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return helper(piles,ss,dp,0,1);
    }
};