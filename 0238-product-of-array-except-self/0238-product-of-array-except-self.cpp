class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,1);
        int pro1=nums[0];
        for(int i=1;i<n;i++)
        {
            ans[i]*=pro1;
            pro1*=nums[i];
        }
        pro1=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            ans[i]*=pro1;
            pro1*=nums[i];
        }
        return ans;
    }
};