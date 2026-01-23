class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        int i,j,k,s=0,s1=0;
        vector<int> leftsum;
        vector<int> rightsum;
        vector<int> ans;
        for(i=0;i<n;i++)
            {
            s=0;
            for(j=i-1;j>=0;j--)
                {
                s=s+nums[j];
            }
            leftsum.push_back(s);
            s1=0;
            for(k=i+1;k<n;k++)
                {
                s1=s1+nums[k];
            }
            rightsum.push_back(s1);
            ans.push_back(abs(rightsum[i]-leftsum[i]));
        }
        return ans;
    }
};