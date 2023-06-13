class Solution {
public:
    string build(vector<int>& row)
    {
        string result="";
        for(auto i:row)
        {
         result+=to_string(i);
            result+="*";
}
        return result;
}
    int equalPairs(vector<vector<int>>& grid) {
      map<string,int>m;
        int ans=0;
        for(vector<int>row:grid)
        {
            m[build(row)]++;
}
        for(int j=0;j<grid[0].size();j++)
        {
            string result;
            for(int i=0;i<grid.size();i++)
{
                result+=to_string(grid[i][j]);
                result+="*";
                
}
            ans+=m[result];
        }
        return ans;
    }
};