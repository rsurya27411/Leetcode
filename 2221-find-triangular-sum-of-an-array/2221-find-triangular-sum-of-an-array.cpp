class Solution {
public:
    int triangularSum(vector<int>& nums) {
 if(nums.size()==1)
    return nums[0];
    vector<int> ans;
for(int i=0;i<nums.size()-1;i++)
    {
 int a=(nums[i]+nums[i+1])%10;
 ans.push_back(a);
}
//for(int i=0;i<ans.size();i++)
    //cout<<ans[i]<<endl;
    return triangularSum(ans);
    }
};