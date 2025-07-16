class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<=nums.size();i++)
        {
            if(((i-1)^nums[i-1])!=0)
            return i-1;
        }
        return nums.size();
    }
};