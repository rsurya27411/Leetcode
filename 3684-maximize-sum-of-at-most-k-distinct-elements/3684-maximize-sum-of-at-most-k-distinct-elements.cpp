class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i=nums.size()-1;i>0;i--){
            if(ans.size() == k)break;
            if(nums[i] != nums[i-1])
            ans.push_back(nums[i]);
        }
        if(nums[0] == nums[1])
        ans.push_back(nums[1]);
        return ans;
    }
};