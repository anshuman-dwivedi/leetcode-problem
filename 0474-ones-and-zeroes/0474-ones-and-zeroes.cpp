class Solution {
public:
    int helper(int ind,int m,int n,vector<string>& strs,vector<vector<vector<int>>>& dp)
    {
   if (ind==strs.size())
         return 0;
        if(dp[m][n][ind]!=-1)
            return dp[m][n][ind];
    int cz=count(strs[ind].begin(),strs[ind].end(),'0');
    int co=strs[ind].length()-cz;
    if(m-cz>=0 && n-co>=0)
    {
        return dp[m][n][ind]= max(1+helper(ind+1,m-cz,n-co,strs,dp),helper(ind+1,m,n,strs,dp));
}
        return dp[m][n][ind]=helper(ind+1,m,n,strs,dp);
}
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<vector<int>>>dp(m+1,vector<vector<int>>(n+1,vector<int>(strs.size(),-1)));
         return helper(0,m,n,strs,dp);
        
    }
};