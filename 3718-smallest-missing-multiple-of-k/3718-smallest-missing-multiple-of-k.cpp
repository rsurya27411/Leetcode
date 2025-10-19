class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int i=k;
        bool flag=true;
        for(int i=k;i<=10000;i+=k){
            flag=false;
            for(int j=0;j<nums.size();j++){
                if(nums[j] == i){
                    flag=true;
                    break;
                }
            }
            if(flag==false)
            return i;
        }
        return -1;
    }
};