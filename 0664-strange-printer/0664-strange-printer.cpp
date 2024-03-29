class Solution {
public:
      int helper(int i,int j,const string& s, vector<vector<int>>& dp)
{

    if(i==j) return 1;  
    if(dp[i][j]!=-1) return dp[i][j];
    int mn=INT_MAX;
    for(int k=i;k<j;k++)
    {
        mn=min(mn,helper(i,k,s,dp)+helper(k+1,j,s,dp)); 
    }
    return dp[i][j]=(s[i]==s[j])?mn-1:mn;
      }
    int strangePrinter(string s) {
        int n=s.length();
      vector<vector<int>>dp(n,vector<int>(n,-1));
        return helper(0,n-1,s,dp);
    }
};