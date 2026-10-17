class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long> ans;
        long long presum=0,num=0,maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > maxi)
            maxi=nums[i];
            long long val = (nums[i] + maxi);
            ans.push_back((long long)(num + val));
            num = ans[ans.size()-1];
        }
        return ans;
    }
};