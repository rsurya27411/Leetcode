class Solution {
public:
    int isValid(vector<int>& nums, int k,int mid){
        int c=1,sum=nums[0],maxsum=-1;
        for(int i=1;i<nums.size();i++){
            if(sum+nums[i] <= mid)
            sum+=nums[i];
            else{
                c++;
                maxsum=max(maxsum,sum);
                sum=nums[i];
            }
        }
        return c<=k ? max(maxsum,sum) : -1;
    }
    int splitArray(vector<int>& nums, int k) {
        int maxi=0,ans=INT_MAX;
        for(int i=0;i<nums.size();i++)
        maxi+=nums[i];
        int st=*max_element(nums.begin(),nums.end()),end=maxi;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(isValid(nums,k,mid) != -1){
                int val=isValid(nums,k,mid);
                ans=min(ans,val);
                end=mid-1;
            }
            else
            st=mid+1;
        }
        return ans;
    }
};