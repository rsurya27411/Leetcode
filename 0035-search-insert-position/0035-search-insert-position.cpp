class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=-1,e=nums.size();
        while(e-s!=1)
        {
            int mid=(e+s)/2;
            if(nums[mid]==target)
            return mid;
            if(nums[mid]<target)
            s=mid;
            else
            e=mid;
        }
        cout<<s<<" "<<e;
        return e;
    }
};