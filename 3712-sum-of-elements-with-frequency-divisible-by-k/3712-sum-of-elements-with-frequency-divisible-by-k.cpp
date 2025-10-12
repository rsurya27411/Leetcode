class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        map<int,int> mp;
        int sum=0;
        for(auto it : nums)
        mp[it]++;
        for(auto it:mp)
        if(it.second % k == 0)
        sum+=it.first * it.second;
        return sum;
    }
};