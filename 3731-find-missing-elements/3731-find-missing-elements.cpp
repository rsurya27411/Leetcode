class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int low=nums[0],high=nums[nums.size()-1],j=0;
        vector<int> ans;
        for(int i=low;i<=high;i++){
            if(i == nums[j])
            j++;
            else
            ans.push_back(i);
        }
        return ans;
    }
};