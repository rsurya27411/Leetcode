class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0 && s.find(nums[i]) == s.end())
            s.insert(nums[i]);
        }
        // for (auto val : s) {
        // cout << val;
        // }
        int i=1;
        while(s.find(i) != s.end()){
            i++;
        }
        return i;
    }
};