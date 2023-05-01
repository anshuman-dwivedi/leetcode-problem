class Solution {
public:
bool helper(vector<int>& arr,int N,int target, vector<vector<bool>> & dp)
{
for(int i=0;i<N;i++)
{
    dp[i][0]=true;
}
    if(arr[0]<=target)
        dp[0][arr[0]]=true;
    for(int i=1;i<N;i++)
    {
        for(int j=1;j<=target;j++)
        {
             bool nottake=dp[i-  1][j];
            bool take=false;
            if(arr[i]<=j)
                take=dp[i-1][j-arr[i]];
           
            dp[i][j]=take|nottake;
}
}
    return dp[N-1][target];
}
    bool canPartition(vector<int>& nums) {
         int sum=0;
         int N=nums.size();
       for(int i=0;i<N;i++)
       {
         sum+=nums[i];  
       }
       if(sum%2)
       return 0;
       int target=sum/2;
       vector<vector<bool>>dp(N,vector<bool>(target+1,false));
       return helper(nums,N,target,dp); 
    }
};