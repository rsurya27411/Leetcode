class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(((m*n) != original.size())) return {};
        vector<vector<int>> ans;
        int k=0;
        for(int i=0;i<m;i++)
        {
            vector<int> arr;
            for(int j=0;j<n;j++)
            {
                arr.push_back(original[k++]);
            }
            ans.push_back(arr);
        }
        return ans;
    }
};