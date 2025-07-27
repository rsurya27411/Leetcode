class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
        long long i=nums.size()-2,c=0,sum=0;
        while(c<i){
            sum+=nums[i];
            c++;
            i-=2;
        }
        return sum;
    }
};