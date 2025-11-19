class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while(original){
            bool flag=false;
            for(int i=0;i<nums.size();i++){
                if(nums[i] == original){
                    flag=true;
                    break;
                }
            }
            if(flag == false)
            break;
            else
            original*=2;
        }
        return original;
    }
};