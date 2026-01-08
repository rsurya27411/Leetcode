class Solution {
public:
int length(int n){
    string s = to_string(n);
    return s.size();
}
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        vector<int> ans;
        for(int i=0;i<grid[0].size();i++){
            int maxi=INT_MIN;
            for(int j=0;j<grid.size();j++)
            maxi=max(maxi,length(grid[j][i]));
            ans.push_back(maxi);
        }
        return ans;
    }
};