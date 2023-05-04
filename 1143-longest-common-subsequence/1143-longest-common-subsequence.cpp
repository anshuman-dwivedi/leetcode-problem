class Solution {
public:

    int longestCommonSubsequence(string s1, string s2) {
    int n=s1.length();
    int m=s2.length();   
    //vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        vector<int>prev(m+1,0);
        vector<int>curr(m+1,0);
for(int i=0;i<=n;i++)
{
    for(int j=0;j<=m;j++)
    {
        if(i==0 || j==0)
        continue;
        if(s1[i-1]==s2[j-1])
      curr[j]=1+prev[j-1];
        else{
           curr[j]=max(prev[j],curr[j-1]);
        }
    }
    prev=curr;
}
    return prev[m];
    }
};