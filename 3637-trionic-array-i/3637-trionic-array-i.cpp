class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int i=0;
        bool flag=false;
        while(i < nums.size()-1 && nums[i+1] > nums[i]){
            flag = true;
            i++;
        }
        if(flag==false)
        return 0;
        int p = i;
        flag = false;
        while(i < nums.size()-1 && nums[i+1] < nums[i]){
            flag = true;
            i++;
        }
        if(flag==false)
        return 0;
        int q=i;
        flag = false;
        while(i < nums.size()-1 && nums[i+1] > nums[i]){
            flag = true;
            i++;
        }
        if(flag == false)
        return 0;
        if(i == nums.size()-1)
        return 1;
        return 0;
    }
};