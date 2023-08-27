class Solution {
public:
    int n;
    unordered_map<int,int>mp;
    int dp[2001][2001];
        bool solve(int pj,int ci,vector<int>& stones)
    {
      if(ci==n-1)
          return true;
            if(dp[ci][pj]!=-1)
                return dp[ci][pj];
        bool result=false;
      for(int nj=pj-1;nj<=pj+1;nj++)
      {
          if(nj>0)
          {
          int ns=nj+stones[ci];
              if(mp.find(ns)!=mp.end())
                 result=result||solve(nj,mp[ns],stones);
          }
}
        return dp[ci][pj]=result;
        
}
    bool canCross(vector<int>& stones) {
      n=stones.size();
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++)
            mp[stones[i]]=i;
        return solve(0,0,stones);
    }
};