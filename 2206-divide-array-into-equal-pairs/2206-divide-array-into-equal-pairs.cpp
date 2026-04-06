class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<int> freq(501,0);
        for(int i=0;i<nums.size();i++)
        freq[nums[i]]++;
        for(int i=1;i<501;i++)
        if((freq[i]&1)==1)
        return 0;
        return 1;
    }
};