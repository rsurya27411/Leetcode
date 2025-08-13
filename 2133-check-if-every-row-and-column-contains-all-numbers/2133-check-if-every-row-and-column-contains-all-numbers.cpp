class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        
        for(int i=0;i<n;i++){
            set<int> arr;
            for(int j=0;j<n;j++){
                if(arr.find(matrix[i][j]) != arr.end())
                return false;
                else
                arr.insert(matrix[i][j]);
            }
        }
        
        for(int i=0;i<n;i++){
            set<int> arr1;
            for(int j=0;j<n;j++){
                if(arr1.find(matrix[j][i]) != arr1.end())
                return false;
                else
                arr1.insert(matrix[j][i]);
            }
        }

        return true;
    }
};