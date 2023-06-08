class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
  int i=0,ans=0;
        int j=n-1;
        while(i>=0 && i<m && j>=0 && j<n)
        {
            if(grid[i][j]<0)
            {
                ans+=(m-i);
                j=j-1;
}
            else
                i+=1;
}
        return ans;
    }
};