class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        vector<int> ans;
        for(int i=0;i<n1;i++)
        {
            int idx=find(nums2.begin(),nums2.end(),nums1[i])-nums2.begin();
            bool flag=false;
            for(int j=idx;j<n2;j++)
            {
                if(nums2[j]>nums1[i])
                {
                    ans.push_back(nums2[j]);
                    flag=true;
                    break;
                }
            }
            if(flag==false)
            ans.push_back(-1);
        }
        return ans;
    }
};