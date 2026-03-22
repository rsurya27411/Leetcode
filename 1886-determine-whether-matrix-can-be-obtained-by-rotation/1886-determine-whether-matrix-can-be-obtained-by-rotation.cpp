class Solution {
public:
vector<vector<int>> rotate(vector<vector<int>>&mat){
    //int i,j,n=matrix.size();
for(int i=0;i<mat.size();i++)
        {
for(int j=i;j<mat.size();j++)
swap(mat[i][j],mat[j][i]);
        }
    for(int i=0;i<mat.size();i++) reverse(mat[i].begin(),mat[i].end());
    return mat;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
for(int i=0;i<10;i++)
    {
    if(rotate(mat)==target)
        return true;
}
    return false;
    }
};