class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 1)
        return 1;
        int k=0,c=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1])
            c++;
            else if(nums[i] != nums[i+1] && c>=1)
            {
                nums[k++]=nums[i];
                nums[k++]=nums[i];
                c=0;
            }
            else
            nums[k++]=nums[i];
        }
        if(nums[nums.size()-1] != nums[nums.size()-2])
        nums[k++]=nums[nums.size()-1];
        if(c>=1){
            nums[k++]=nums[nums.size()-1];
            nums[k++]=nums[nums.size()-1];
        }
        return k;
    }
};