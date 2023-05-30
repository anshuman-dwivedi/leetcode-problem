class Solution {
public:
    bool helper(int i,int j,int ind,int n,int m,string word,vector<vector<char>>& board)
{
     if(ind==word.size())
    return true;
    if(i<0 || i>=n || j<0 || j>=m || board[i][j]!=word[ind])
    return false;
    int dx[]={0,-1,1,0};
    int dy[]={1,0,0,-1};
    char temp=board[i][j];
    board[i][j]='.';
    for(int p=0;p<4;p++)
    {
      if(helper(i+dx[p],j+dy[p],ind+1,n,m,word,board))
      return true;
    }
    board[i][j]=temp;
    return false;
}
    bool exist(vector<vector<char>>& board, string word) {
       int n=board.size();
    int m=board[0].size();
    //vector<vector<int>visited(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(board[i][j]==word[0])
            {
                if(helper(i,j,0,n,m,word,board))
                return true;
            }
        }
    }
    return false; 
    }
};
