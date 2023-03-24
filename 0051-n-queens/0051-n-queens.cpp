class Solution {
public:

   
        vector<vector<string> > result; // 2D vector of strings to store the solutions   
    bool isSafe(vector<string>& board, int row, int col) {
	    int n = size(board);
	    for(int i = 0; i < n; i++) {
		    if(board[i][col] == 'Q') return false; 
		    // checking if there is a queen in the same diagonal (left to right)
		    if(row - i >= 0 && col - i >= 0 && board[row - i][col - i] == 'Q') return false;
		    if(row - i >= 0 && col + i <  n && board[row - i][col + i] == 'Q') return false;
	    }
	    return true;
    }
    void solve(vector<string>& board, int row,int n) {
	    if(row == n) { 
		  result.push_back(board);
		    return;
    	}            
	    for(int col = 0; col <n; col++){
		    if(isSafe(board, row, col)) {
			    board[row][col] = 'Q';   
			    solve(board, row + 1,n);   
			    board[row][col] = '.';  
		    }
        }
    }
         vector<vector<string>> solveNQueens(int n) {
         vector<string>board(n,string(n,'.'));
       solve(board,0,n);
       return result;
    }
};