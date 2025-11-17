class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int a=0;
        for(int i=0;i<nums.size();i++)
        if(nums[i] == 1){
            a=i;
            break;
        }
        int b=0;
        for(int i=a+1;i<nums.size();i++){
            if(nums[i] == 1){
                if((i-a-1) < k)
                return false;
                else
                a=i;
            }
        }
        return true;
    }
};