class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum=0;
        for(long long i=0;i<nums.size();i++)
        sum+=nums[i];
        long long tempsum=0,c=0;
        for(long long i=0;i<nums.size();i++)
        {
            tempsum+=nums[i];
            if(tempsum >= sum-tempsum)
            c++;
        }
        if(sum<0)
        return c;
        return c-1;
    }
};