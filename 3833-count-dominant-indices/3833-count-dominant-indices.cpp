class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n=nums.size();
        int sum=0,c=0;
        for(int i=0;i<n;i++)
        sum+=nums[i];
        for(int i=0;i<n-1;i++){
            double avg = (double)(sum-nums[i])/(double)(n-i-1);
            cout<<avg<<" ";
            if(nums[i] > avg)
            c++;
            sum-=nums[i];
        }
        return c;
    }
};