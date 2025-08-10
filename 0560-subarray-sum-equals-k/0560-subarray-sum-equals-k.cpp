class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(),c=0;
        vector<int> prefixSum(n,0);
        prefixSum[0]=nums[0];
        for(int i=1;i<n;i++)
        prefixSum[i]=nums[i]+prefixSum[i-1];
        unordered_map<int,int> mp;
        for(int j=0;j<n;j++){
            if(prefixSum[j] == k)
            c++;
            int val=prefixSum[j]-k;
            if(mp.find(val) != mp.end())
            c+=mp[val];
            if(mp.find(prefixSum[j]) == mp.end())
            mp[prefixSum[j]]=0;
            mp[prefixSum[j]]++;
        }
        return c;
    }
};