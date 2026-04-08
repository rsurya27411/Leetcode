class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        for(int i=0;i<queries.size();i++){
            for(int j=queries[i][0];j<=queries[i][1];j+=queries[i][2]){
                nums[j] = (((long long)nums[j] * queries[i][3])) % (1000000000 + 7);
            }
        }
        int ans=0;
        for(int it=0;it<nums.size();it++)
        ans^=nums[it];
        return ans;
    }
};