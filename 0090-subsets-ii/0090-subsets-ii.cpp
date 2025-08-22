class Solution {
public:
    void getsubsets(vector<int>& nums,vector<int>& arr,vector<vector<int>>& ans,int i){
        if(i==nums.size()){
            ans.push_back(arr);
            return;
        }

        arr.push_back(nums[i]);
        getsubsets(nums,arr,ans,i+1);

        int idx=i+1;
        while(idx < nums.size() && nums[idx] == nums[i])idx++;

        arr.pop_back();
        getsubsets(nums,arr,ans,idx);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> arr;
        getsubsets(nums,arr,ans,0);
        return ans;
    }
};