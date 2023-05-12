class Solution {
public:
 
    long long mostPoints(vector<vector<int>>& q) {
    int n=q.size();
        vector<long long>dp(n+1,0);
     for(int i=n-1;i>=0;i--)
     {
     long long t=q[i][0]+dp[min(i+q[i][1]+1,n)];  
         long long nt=dp[i+1];
         dp[i]=max(t,nt);
}
        return dp[0];
    }
};
