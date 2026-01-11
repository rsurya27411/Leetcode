class Solution {
public:
    int maximumProduct(vector<int>& nums) {
sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> ans;
ans.push_back(nums[0]*nums[1]*nums[2]);
ans.push_back(nums[n-1]*nums[n-2]*nums[n-3]);
ans.push_back(nums[0]*nums[n-1]*nums[n-2]);
ans.push_back(nums[0]*nums[1]*nums[n-1]);
sort(ans.begin(),ans.end());
    int n1=ans.size();
    return ans[n1-1];
    }
};