class Solution {
public:
void dfs(int row,int col,vector<vector<int>>& ans,vector<vector<int>>& image,int color,vector<int>& dir,int inc)
{
    ans[row][col]=color;
    for(int i=0;i<4;i++)
    {
int newx=row+dir[i];
int newy=col+dir[i+1];
if(newx>=0 && newx<image.size() && newy>=0 && newy<image[0].size() && ans[newx][newy]!=color && image[newx][newy]==inc)
{
 dfs(newx,newy,ans,image,color,dir,inc);

}
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       int inc=image[sr][sc];
       vector<vector<int>>ans=image;
       vector<int>dirc({-1,0,1,0,-1});
       dfs(sr,sc,ans,image,color,dirc,inc);
       return ans;

    }
};