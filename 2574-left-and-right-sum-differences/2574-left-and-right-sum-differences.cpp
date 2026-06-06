class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum=0,lsum=0;
        vector<int> ans;
        for(auto it:nums)
        sum+=it;
        for(int i=0;i<nums.size();i++){
            ans.push_back(abs(sum-(nums[i]+lsum)));
            sum-=nums[i];
            lsum+=nums[i];
        }
        return ans;
    }
};