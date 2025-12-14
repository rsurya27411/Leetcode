class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int lsum=0,rsum=0;
        for(int i=0;i<k;i++)
        lsum+=nums[i];
        reverse(nums.begin(),nums.end());
        for(int i=0;i<k;i++)
        rsum+=nums[i];
        return rsum-lsum;
    }
};