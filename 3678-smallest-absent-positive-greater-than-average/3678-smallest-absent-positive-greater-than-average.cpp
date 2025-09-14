class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int sum=0,n=nums.size();
        for(auto val:nums)
        sum+=val;
        int avg=sum/n;
        if(sum < 0)
        avg=0;
        while(find(nums.begin(),nums.end(),avg+1) != nums.end())
        avg++;

        return avg+1;
    }
};