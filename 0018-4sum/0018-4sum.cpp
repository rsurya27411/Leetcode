class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        set<vector<int>> st;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                set<long long> s;
                for(int k=j+1;k<nums.size();k++){
                    long long sum=nums[i]+nums[j];
                    sum+=nums[k];
                    long long remain=(long long)target-sum;
                    if(s.find(remain) != s.end()){
                        vector<int> temp={nums[i],nums[j],nums[k],(int)remain};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    s.insert(nums[k]);
                }
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};