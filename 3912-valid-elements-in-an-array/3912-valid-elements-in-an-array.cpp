class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        if(nums.size() == 1)
        return nums;
        vector<int> ans;
ans.push_back(nums[0]);

for(int i=1;i<nums.size()-1;i++){

    bool flag1 = true;
    for(int j=0;j<i;j++){
        if(nums[j] >= nums[i]){
            flag1 = false;
            break;
        }
    }

    bool flag2 = true;
    for(int j=i+1;j<nums.size();j++){
        if(nums[j] >= nums[i]){
            flag2 = false;
            break;
        }
    }

    if(flag1 || flag2)
        ans.push_back(nums[i]);
}

ans.push_back(nums.back());

return ans;
    }
};