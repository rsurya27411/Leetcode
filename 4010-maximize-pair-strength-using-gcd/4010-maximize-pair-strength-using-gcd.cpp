class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans=-1;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                long long pro = 1LL * nums[i] * nums[j];
                int gcd=__gcd(nums[i],nums[j]);
                long long res = pro/(1LL * gcd*gcd);
                ans=max(ans,res);
            }
        }
        return ans;
    }
};