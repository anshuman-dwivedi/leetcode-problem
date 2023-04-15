
   /* int helper(int i,int j,int m,int n,vector<vector<int>>& dp)
    {
        if(i==0 && j==0)
            return 1;
        if(i<0 || j<0)
            return 0;
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
}
        long long temp=0;
        temp=temp+helper(i-1,j,m,n,dp);
        temp+=helper(i,j-1,m,n,dp);
        dp[i][j]=temp;
        return dp[i][j];
        
}
   
      vector<vector<int>>vec(m,vector<int>(n,-1)); 
        int count=helper(m-1,n-1,m,n,vec);
        return count;
    }
};*/
class Solution {
public:
     int uniquePaths(int m, int n) {
        int tn=m+n-2;
         int res=1;
        double r=m-1;
         for(int i=1;i<=r;i++)
             res=res*(tn-r+i)/i;
         return (int)res;
     }
};