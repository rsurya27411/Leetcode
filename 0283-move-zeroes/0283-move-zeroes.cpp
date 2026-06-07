class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=1;
        while(i < nums.size() && j < nums.size()){
            if(nums[i] == 0 && nums[j] != 0){
                swap(nums[i],nums[j]);
                i++;j++;
                continue;
            }
            if(nums[i] != 0 && nums[j] == 0){
                i++;
                continue;
            }
            if(nums[i] == 0 && nums[j] == 0){
                j++;
                continue;
            }
            if(nums[i] != 0 && nums[j] != 0){
                j++;
                continue;
            }
        }
    }
};