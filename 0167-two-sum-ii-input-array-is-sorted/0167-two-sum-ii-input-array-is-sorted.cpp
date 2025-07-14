class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        while(i<j)
        {
            cout<<i<<" "<<j<<endl;
            int mid=(i+j)/2;
            if(nums[i]+nums[mid] == target)
            return {i+1,mid+1};
            if(nums[mid]+nums[j] == target)
            return {mid+1,j+1};
            if(nums[i]+nums[j] == target)
            return {i+1,j+1};
            if(nums[i]+nums[j] > target)
            j--;
            if(nums[i]+nums[j] < target)
            i++;
            //cout<<i<<" "<<j<<endl;
        }
        return {0,0};
    }
};