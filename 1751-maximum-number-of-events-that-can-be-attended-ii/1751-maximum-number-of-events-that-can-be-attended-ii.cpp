class Solution {
public:
    int helper(int ind,int k,int n,vector<vector<int>>& events, vector<vector<int>>& dp)
    {
       if(ind>=n) return 0;
        if(k==0) return 0;
        if(dp[ind][k]!=-1)return dp[ind][k];
        int i;
        for(i=ind+1;i<n;i++){
            if(events[ind][1]<events[i][0]) break;
        }
        int pick=events[ind][2]+helper(i,k-1,n,events,dp);
        int notpick=helper(ind+1,k,n,events,dp);
        return dp[ind][k]=max(pick,notpick);
    }
    int maxValue(vector<vector<int>>& events, int k) {
        int n=events.size();
        sort(events.begin(),events.end());
        vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
        return helper(0,k,n,events,dp);
    }
};
