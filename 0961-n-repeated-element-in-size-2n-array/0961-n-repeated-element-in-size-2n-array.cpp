class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int i=0,n=nums.size()/2,c=1;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1])
            c++;
            if(c == n)
            break;
        }
        if(c == n)
        return nums[i];
        return -1;
    }
};