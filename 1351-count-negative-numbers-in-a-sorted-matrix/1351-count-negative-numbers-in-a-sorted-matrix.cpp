class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
       int i,j,c=0;
        int n=grid.size();
        int m = grid[0].size();
        for(i=0;i<n;i++)
            {
            for(j=0;j<m;j++)
                {
                if(grid[i][j]<0)
                    c++;
            }
        }
        return c;
    }
};