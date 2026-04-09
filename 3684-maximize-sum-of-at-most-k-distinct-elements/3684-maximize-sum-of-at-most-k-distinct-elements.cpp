class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        if(nums.size() == 1)return nums;
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int i=0;
        for(i=nums.size()-1;i>0;i--){
            if(ans.size() == k)break;
            if(i>=0 && nums[i] != nums[i-1])
            ans.push_back(nums[i]);
        }
        if(ans.size() < k){
            if(find(ans.begin(),ans.end(),nums[i]) == ans.end())
            ans.push_back(nums[i]);
        }
        cout<<i;
        return ans;
    }
};