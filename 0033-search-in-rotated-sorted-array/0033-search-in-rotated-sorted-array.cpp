class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        while(i<=j)
        {
            int mid=(j+i)/2;
            if(nums[mid]==target)
            return mid;
            if(nums[mid]<=nums[j])
            {
                if(target>nums[mid] && target<=nums[j])
                i=mid+1;
                else
                j=mid-1;
            }
            else
            {
                if(target<nums[mid] && target>=nums[i])
                j=mid-1;
                else
                i=mid+1;
            }
        }
        return -1;
    }
};