class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int sum=nums[0],c=0;
        for(int i=1;i<nums.size();i++){
            if(sum+nums[i] == 0)
            c++;
            sum+=nums[i];
            cout<<i<<" "<<sum<<endl;
        }
        cout<<sum;
        return c;
    }
};