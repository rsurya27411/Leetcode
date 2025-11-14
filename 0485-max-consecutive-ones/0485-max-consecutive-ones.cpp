class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
int n=nums.size(),i,c=0,a=0;
    vector<int> ans;
        for(i=0;i<n;i++)
            {
            if(nums[i]==1)
            c++;
else if(nums[i]==0){
            if(c>a)
            a=c;
            c=0;
            }
        }
        if(c>a)
            a=c;
        return a;
    }
};