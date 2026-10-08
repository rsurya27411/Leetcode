class Solution {
public:
    bool isequal(vector<vector<int>>& grid,vector<int>& arr,int k){
        for(int i=0;i<grid.size();i++){
            if(grid[i][k] != arr[i])
            {//cout<<grid[k][i]<<" "<<arr[i]<<endl;
            return false;}
        }
        //cout<<"Rahul"<<endl;
        return true;
    }
    int equalPairs(vector<vector<int>>& grid) {
        int c=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                if(isequal(grid,grid[j],i))
                c++;
            }
        }
        return c;
    }
};