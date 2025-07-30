class Solution {
public:
    bool isValid(vector<int>& nums,int threshold,int mid){
        int c=0;
        for(int i=0;i<nums.size();i++)
        c+=ceil((double)nums[i]/(double)mid);
    return c<=threshold ? true:false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int st=*min_element(nums.begin(),nums.end());
        int end=*max_element(nums.begin(),nums.end()),ans=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(isValid(nums,threshold,mid)){
                ans=mid;
                end=mid-1;
            }
            else
            st=mid+1;
        }
        return ans;
    }
};