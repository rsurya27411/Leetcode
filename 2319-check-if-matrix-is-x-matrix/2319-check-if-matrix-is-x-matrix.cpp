class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(i == j){
                    cout<<"A";
                    if(grid[i][j] == 0) 
                    return false;
                    else 
                    continue;
                }
                if(i+j == grid.size() - 1){
                    cout<<"B";
                    if(grid[i][j] == 0) 
                    return false;
                    else 
                    continue;
                }
                if(grid[i][j] != 0) {
                    cout<<"C";
                    return false;
                }
            }
        }
        return true;
    }
};