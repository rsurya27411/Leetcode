class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        if(nums.size() == 1) return nums[0] * nums[0];
    for(long long i=0;i<nums.size();i++)
    if(nums[i] < 0)
    nums[i]*=(-1);
    
    sort(nums.begin(),nums.end());

    long long sum1=0,sum2=0,i;
    for(i=nums.size()-1;i>=(nums.size())/2;i--)
    sum1+=(pow(nums[i],2));
    cout<<sum1;
    for(i=i;i>=0;i--)
    sum2+=(pow(nums[i],2));

    return sum1-sum2;
    }
};