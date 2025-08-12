class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            set<int> s;
            for(int j=0;j<9;j++){
                if(isdigit(board[i][j])){
                    if(s.find(board[i][j]) != s.end())
                    return false;
                    else
                    s.insert(board[i][j]);
                }
            }
        }

        for(int i=0;i<9;i++){
            set<int> s;
            for(int j=0;j<9;j++){
                if(isdigit(board[j][i])){
                    if(s.find(board[j][i]) != s.end())
                    return false;
                    else
                    s.insert(board[j][i]);
                }
            }
        }
        vector<vector<int>> blocks={{0,0},{0,3},{0,6},{3,0},{3,3},{3,6},{6,0},{6,3},{6,6}};
        for (int br = 0; br < 9; br += 3) {      
        for (int bc = 0; bc < 9; bc += 3) {  
        set<int> s;
        for (int i = br; i < br + 3; i++) {
            for (int j = bc; j < bc + 3; j++) {
                if(isdigit(board[i][j])){
                    if(s.find(board[i][j]) != s.end())
                    return false;
                    else
                    s.insert(board[i][j]);
                }
            }
        }
    }
}
    return 1;
    }
};