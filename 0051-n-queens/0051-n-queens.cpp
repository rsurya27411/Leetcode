class Solution {
public:
    bool isSafe(int col,int row,vector<string>& board,int n){
        //horizontal
        for(int j=0;j<n;j++){
            if(board[row][j] == 'Q')
            return false;
        }

        //vertical
        for(int i=0;i<n;i++){
            if(board[i][col] == 'Q')
            return false;
        }

        //left diagonal
        for(int i=row,j=col;i>=0 && j>=0;i--,j--){
            if(board[i][j] == 'Q')
            return false;
        }

        //right diagonal
        for(int i=row,j=col;i>=0 && j<n;i--,j++){
            if(board[i][j] == 'Q')
            return false;
        }

        return true;
    }
    void nqueens(vector<string>& board,vector<vector<string>>& ans,int row,int n){
        if(row == n){
            ans.push_back(board);
            return;
        }

        for(int j=0;j<n;j++){
            if(isSafe(j,row,board,n)){
                board[row][j]='Q';
                nqueens(board,ans,row+1,n);
                board[row][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> ans;

        nqueens(board,ans,0,n);
        return ans;
    }
};