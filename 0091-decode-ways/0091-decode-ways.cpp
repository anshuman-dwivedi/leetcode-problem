class Solution {
public:
	int mod=1e9+7;
	int helper(int i,int n,string& str,vector<int>& dp)
	{
	  if(i>=n)
	  return 1;
	  else if(str[i]=='0')
	      return 0;
	  else if(i==n-1)
	  return 1;
	  if(dp[i]!=-1)
	  return dp[i];
	  if(str[i]=='1' || (str[i]=='2'&& (str[i+1]>=48 && str[i+1]<=54)))
return dp[i]=helper(i+1,n,str,dp)+helper(i+2,n,str,dp);
else
return dp[i]=helper(i+1,n,str,dp);
	}
    int numDecodings(string str) {
         int n=str.size();
		    if(n==0)
		    return 1;
		   vector<int>dp(n,-1);
		   return helper(0,n,str,dp);
    }
};