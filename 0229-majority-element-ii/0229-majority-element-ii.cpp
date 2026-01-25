class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
sort(nums.begin(),nums.end());
int i,c=1,n=nums.size(),l=n/3;
    if(n==1) return nums;
    vector<int> ans;
    for(i=0;i<n-1;i++)
    {
    if(nums[i]==nums[i+1]){
    c++;}
    else if(c>l){
    ans.push_back(nums[i]);
    c=1;}
    else c=1;
    }
    cout<<c;
    if(c>l)
    ans.push_back(nums[i]);
    return ans;
    }
};