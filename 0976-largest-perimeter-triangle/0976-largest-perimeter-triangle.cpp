class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(j+1 < nums.size() && nums[i] + nums[j] > nums[j+1])
                ans=max(ans,(nums[i] + nums[j] + nums[j+1]));
            }
        }
        return ans;
    }
};