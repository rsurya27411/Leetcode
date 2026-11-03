class Solution {
public:
    int minMoves(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int maxi=nums[nums.size()-1];
    int c=0;
    for(int i=0;i<nums.size();i++)
    c+=(maxi-nums[i]);
    return c;  
    }
};