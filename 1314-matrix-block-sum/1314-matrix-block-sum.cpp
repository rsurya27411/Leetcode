class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        vector<vector<int>> ans(mat.size(), vector<int>(mat[0].size(), 0));
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                int r1=i-k,r2=i+k;
                int c1=j-k,c2=j+k;
                int sum=0;
                for(int l=r1;l<=r2;l++){
                    for(int m=c1;m<=c2;m++){
                        if(l > -1 && m > -1 && l < mat.size() && m < mat[i].size())
                        sum+=mat[l][m];
                    }
                }
                ans[i][j]=sum;
            }
        }
        // for(auto i:ans){
        //     cout<<i<<" ";
        // }
        return ans;
    }
};