class Solution {
public:
    int findmaxi(vector<int>& nums,int idx){
        int maxi=INT_MIN;
        for(int i=0;i<=idx;i++)
        maxi=max(nums[i],maxi);
        return maxi;
    }
    int findmini(vector<int>& nums,int idx){
        int mini=INT_MAX;
        for(int i=idx;i<nums.size();i++)
        mini=min(nums[i],mini);
        return mini;
    }
    int firstStableIndex(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            int maxi=findmaxi(nums,i);
            int mini=findmini(nums,i);
            if((maxi - mini) <= k)
            return i;
        }
        return -1;
    }
};