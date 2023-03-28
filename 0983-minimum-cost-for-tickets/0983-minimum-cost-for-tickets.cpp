class Solution {
public:
    int solve(vector<int>& days, vector<int>& costs,int n,int index,vector<int>& dp)
    {
        if(index>=n)
            return 0;
        if(dp[index]!=-1)
            return dp[index];
        int opt1=costs[0]+solve(days,costs,n,index+1,dp);
        int i;
        for(i=index;i<n && days[i]<days[index]+7 ;i++);
        int opt2=costs[1]+solve(days,costs,n,i,dp);
         for(i=index;i<n && days[i]<days[index]+30 ;i++);
          int opt3=costs[2]+solve(days,costs,n,i,dp);
        return dp[index]=min(opt1,min(opt2,opt3));
}
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int index=0;
        int n=days.size();
         vector<int>dp(n,-1);
        return solve(days,costs,n,index,dp);
    }
};