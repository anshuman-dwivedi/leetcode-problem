class Solution {
public:
    int helper(int i,int j,vector<int>& nums,int player,vector<vector<int>>&dp)
    {
        if(i>j)
            return -1;
        if(i==j)
            return nums[i];
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(player)
            dp[i][j]=max(nums[i]+helper(i+1,j,nums,0,dp),nums[j]+helper(i,j-1,nums,0,dp));
        else
         dp[i][j]=min(-nums[i]+helper(i+1,j,nums,1,dp),-nums[j]+helper(i,j-1,nums,1,dp));   
        return dp[i][j];
}
    bool PredictTheWinner(vector<int>& nums) {
        int n=nums.size();
       vector<vector<int>>dp(n,vector<int>(n,-1));
        return helper(0,n-1,nums,1,dp)>=0;
        
    }
};