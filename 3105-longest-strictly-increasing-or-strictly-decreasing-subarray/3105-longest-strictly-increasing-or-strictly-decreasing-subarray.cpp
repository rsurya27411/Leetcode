class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxlen=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            int c1=1;
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]>nums[j-1])
                c1++;
                else
                break;
            }
            maxlen=max(maxlen,c1);
        }
        for(int i=0;i<nums.size();i++)
        {
            int c2=1;
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]<nums[j-1])
                c2++;
                else
                break;
            }
            maxlen=max(maxlen,c2);
        }
        return maxlen;
    }
};