class Solution {
public:
    int minMaxGame(vector<int>& nums) {
   int n=nums.size(),i;
    if(n==1) return nums[0];
    vector<int> ans(n/2,0);
    for(i=0;i<n/2;i++)
        {
        if(i%2!=0)
ans[i]=max(nums[2*i],nums[2*i+1]);
        else
ans[i]=min(nums[2*i],nums[2*i +1]);
    }
//for(i=0;i<nums.size();i++)
    int n1=ans.size();
    if(n1==1)
        return ans[0];
        else
    return minMaxGame(ans);
       return n;
    }
};