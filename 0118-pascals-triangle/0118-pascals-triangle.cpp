class Solution {
public:
    vector<int> newArray(vector<int> arr){
        vector<int> ans;
        ans.push_back(1);
        for(int i=0;i<arr.size()-1;i++)
        ans.push_back(arr[i]+arr[i+1]);
        ans.push_back(1);
        return ans;
    }
    vector<vector<int>> generate(int rows) {
        vector<vector<int>> ans = {{1},{1,1},{1,2,1}};
        vector<int> arr;
        if(rows == 1)
       return {{1}};
        if(rows == 2)
        return {{1},{1,1}};
        if(rows == 3)
        return {{1},{1,1},{1,2,1}};
        for(int i=1;i<=rows-3;i++){
            arr=newArray(ans[ans.size()-1]);
            ans.push_back(arr);
        }
        return ans;
    }
};