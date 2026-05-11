class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            string s="";
            while(nums[i])
            {
                s+=to_string(nums[i]%10);
                nums[i]/=10;
            }
            for(int j=s.size()-1;j>=0;j--)
            ans.push_back(s[j]-'0');
        }
        return ans;
    }
};