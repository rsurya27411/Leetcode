class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        cout<<n<<m<<endl;
        vector<vector<int>> pos;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                pos.push_back({i,j});
            }
        }
        for(int i=0;i<pos.size();i++){
            cout<<pos[i][0]<<pos[i][1]<<endl;
        }
        for(int i=0;i<pos.size();i++){
            int rows=pos[i][0],col=pos[i][1];
            for(int j=0;j<m;j++)
            matrix[rows][j]=0;
            for(int k=0;k<n;k++)
            matrix[k][col]=0;
        }
    }
};