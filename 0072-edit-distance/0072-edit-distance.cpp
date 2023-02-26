class Solution {
public:
int helper(string s,string t,int m,int n,vector<vector<int>>& dp)
  {
      if(m==0) 
      return n;
      if(n==0)
      return m;
      if(dp[m][n]!=-1)
      return dp[m][n];
      if(s[m-1]==t[n-1])
      {
   return dp[m][n]=helper(s,t,m-1,n-1,dp);
      }
      else
      return dp[m][n]=1+min(helper(s,t,m,n-1,dp),min(helper(s,t,m-1,n,dp),helper(s,t,m-1,n-1,dp)));
}
int minDistance(string s, string t) {
            int m=s.length();
        int n=t.length();
      vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
      return helper(s,t,m,n,dp);
    }
};