class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele=nums[0],c=1;
        for(int i=1;i<nums.size();i++){
            if(c == 0)
            ele=nums[i];
            if(nums[i] == ele)
            c++;
            else
            c--;
        }
        return ele;
    }
};