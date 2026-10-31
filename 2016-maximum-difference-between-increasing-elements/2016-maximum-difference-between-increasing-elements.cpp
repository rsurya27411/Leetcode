class Solution {
public:
    int maximumDifference(vector<int>& nums) {
    int maxi=-1;
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums.size();j++){
            if(j>i && nums[j] > nums[i])
            maxi=max(maxi,nums[j] - nums[i]);
        }
    }
    return maxi;
    }
};