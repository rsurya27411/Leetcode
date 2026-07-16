class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> ans;
        int maxi=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i] > maxi)
            maxi=nums[i];
            ans.push_back(__gcd(nums[i],maxi));
        }

        sort(ans.begin(),ans.end());
        long long sum=0;
        int i=0,j=ans.size()-1;
        while(i<j){
            sum+=__gcd(ans[i],ans[j]);
            i++;
            j--;
        }
        return sum;
    }
};