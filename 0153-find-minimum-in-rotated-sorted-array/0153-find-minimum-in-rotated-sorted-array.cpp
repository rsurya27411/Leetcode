class Solution {
public:
    int findMin(vector<int>& nums) {
    if((nums.size()==1) || (nums.size()==2 && nums[0]<nums[1]))
    return nums[0];
    if(nums.size()==2 && nums[0]>nums[1])
    return nums[1];
    int i=0,j=nums.size()-1;
    while((j-i)!=1)
    {
        int mid=(i+j)/2;
        if(nums[i]<nums[mid] && nums[mid]<nums[j])
        return nums[0];
        if(nums[mid]<nums[j] && nums[mid]<nums[i])
        j=mid;
        else
        i=mid;
        }
        return nums[j];
    }
};