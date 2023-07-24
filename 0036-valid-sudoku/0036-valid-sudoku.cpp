class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      int checkrow[9][9]={0};
        int checkcol[9][9]={0};
        int checksq[9][9]={0};
    int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]!='.')
                {
                    int num=board[i][j]-'0'-1;
                        
                        if(checkrow[i][num] || checkcol[j][num] || checksq[(i/3*3)+(j/3)][num])
                            return false;
                    checkrow[i][num]=1;
                    checkcol[j][num]=1;
                    checksq[i/3*3+j/3][num]=1;
                    
}
}
}
        return true;
    }
};