class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=0;
        for(auto val : nums)
        sum+=val;
        int lsum=nums[0],rsum=sum-lsum,c=0;
        for(int i=1;i<nums.size();i++){
            if(((lsum-rsum) & 1) == 0)
            c++;
            lsum+=nums[i];
            rsum-=nums[i];
        }
        return c;
    }
};