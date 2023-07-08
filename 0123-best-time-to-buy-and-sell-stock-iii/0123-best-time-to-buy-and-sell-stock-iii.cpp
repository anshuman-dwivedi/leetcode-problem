class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
 vector<vector<int>>dp(n+1,vector<int>(4+1,0));
for(int i=n-1;i>=0;i--){
                for (int trans=3;trans>=0;trans--) {
                    if (trans%2==0) 
                        dp[i][trans] = max(-prices[i] + dp[i+1][trans+1], 0 + dp[i+1][trans]);
                    else
                        dp[i][trans] = max(prices[i] + dp[i+1][trans+1], 0 + dp[i+1][trans]);
                }
            }
        return dp[0][0];
    }};