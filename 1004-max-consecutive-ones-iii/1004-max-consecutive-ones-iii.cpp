class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,maxlngth=0,z=0;
        while(r<nums.size()){
            if(nums[r] == 0)
            z++;
            if(z > k){
                while(z > k){
                    if(nums[l] == 0)
                    z--;
                    l++;
                }
            }
            maxlngth=max(maxlngth,r-l+1);
            r++;
        }
        return maxlngth;
    }
};