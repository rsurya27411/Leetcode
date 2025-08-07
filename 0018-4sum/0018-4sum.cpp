class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i] == nums[i-1])continue;
            for(int j=i+1;j<nums.size();){
                //if(j<nums.size()-1 && nums[j] == nums[j-1])continue;
                if(j<nums.size() && nums[j] == nums[j-1])continue;
                    int p=j+1,q=nums.size()-1;
                    while(p<q){
                        int sum=nums[i]+nums[j]+nums[p]+nums[q];
                        if(sum<target)
                        p++;
                        else if(sum>target)
                        q--;
                        else{
                            ans.push_back({nums[i],nums[j],nums[p],nums[q]});
                            p++;q--;
                            while(p<q && nums[p] == nums[p-1])p++;
                        }
                    }
                    j++;
                    while(j<nums.size()-1 && nums[j] == nums[j-1])j++;
                }
        }
        return ans;
    }
};