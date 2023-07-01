class Solution {
public:
    int ans=INT_MAX;
    void solve(int start,vector<int>& nums,int k,vector<int>&dp)
    {
     if(start==nums.size())
     {
         int mini=INT_MIN;
         for(int i=0;i<k;i++)
         {
             mini=max(mini,dp[i]);
}
         ans=min(ans,mini);
             return;
}
        for(int i=0;i<k;i++)
        {
            dp[i]+=nums[start];
            solve(start+1,nums,k,dp);
            dp[i]-=nums[start];
}
}
    int distributeCookies(vector<int>& cookies, int k) {
      vector<int>dp(k,0);
        solve(0,cookies,k,dp);
        return ans;
    }
};