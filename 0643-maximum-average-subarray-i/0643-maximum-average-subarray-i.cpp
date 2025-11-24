class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    if(nums.size()==1) return (double)nums[0]/k;
       int i=0,j=0,sum=0;
       double ans=INT_MIN;
       for(int i=0;i<k;i++)
       sum+=nums[i];
       ans=max(ans,(double)sum/k);
       for(int i=k;i<nums.size();i++)
       {
        sum-=nums[j++];
        sum+=nums[i];
        ans=max(ans,(double)sum/k);
       }
       return ans;
    }
};