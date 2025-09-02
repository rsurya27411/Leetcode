class Solution {
public:int c=0;
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
    void nqueens(vector<string>& board,int row,int n){
        if(row == n){
        c++;
        return;
        }

        for(int j=0;j<n;j++){
            if(isSafe(j,row,board,n)){
                board[row][j]='Q';
                nqueens(board,row+1,n);
                board[row][j]='.';
            }
        }
    }
    int totalNQueens(int n) {
       vector<string> board(n,string(n,'.'));
        nqueens(board,0,n);
        return c; 
    }
};