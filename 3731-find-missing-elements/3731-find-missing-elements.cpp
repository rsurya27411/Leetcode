class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int st=nums[0];
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(st == nums[i])
            st++;
            else{
                ans.push_back(st);
                i--;
                st++;
            }
        }
        return ans;
    }
};