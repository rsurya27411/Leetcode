class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),sum=0,s=(n*(n+1))/2;
        for(int i=0;i<nums.size();i++)
        sum+=nums[i];
        int c=0;
        for(int i=0;i<nums.size()-1;i++)
        if(nums[i]==nums[i+1])
        c=nums[i];
        return {c,s-(sum-c)};
    }
};