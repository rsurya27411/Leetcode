class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            vector<int> s;
            bool flag=false;
            for(int j=0;j<nums.size();j++){
                if(find(s.begin(),s.end(),nums[j]) == s.end() && nums[j] != -1){
                    s.push_back(nums[j]);
                    nums[j]=-1;
                    flag=true;
                }
            }
            if(flag == true)
            ans.push_back(s);
        }
        return ans;
    }
};