class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int c=0;
        int a=nums[((nums.size()-1)/2)];
        for(int i=0;i<nums.size();i++){
            if(nums[i] == a)
                c++;
        }
        //cout<<a;
        if(c>1)
            return 0;
        return 1;
    }
};